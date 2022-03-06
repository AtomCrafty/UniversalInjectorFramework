#pragma once

#include <type_traits>

namespace uif::calling_conventions
{
	enum class registers : char
	{
		none, eax, ebx, ecx, edx, esi, edi
	};

	// function_traits implementation adapted from
	// https://devblogs.microsoft.com/oldnewthing/20200713-00/?p=103978
	template<typename F> struct function_traits;

	template<typename TReturn, typename... TArgs>
	struct function_traits<TReturn(*)(TArgs...)>
	{
		using pointer = TReturn(*)(TArgs...);
		using return_type = TReturn;
		static constexpr size_t arg_count = sizeof...(TArgs);
	};

	template<typename TReturn>
	struct function_traits<TReturn(*)()>
	{
		using pointer = TReturn(*)();
		using return_type = TReturn;
		static constexpr size_t arg_count = 0;
	};

	template<auto* const* FuncPtrPtr, bool PurgeStack, registers... Registers>
	class calling_convention_adapter
	{
	public:
		static void to_cdecl();
	private:
		template<registers Reg1, registers Reg2, registers Reg3, registers Reg4, registers Reg5, registers Reg6>
		static void to_cdecl_impl();
	};

	template<auto* const* FuncPtrPtr, registers... Registers>
	using usercall_adapter = calling_convention_adapter<FuncPtrPtr, false, Registers...>;

	template<auto* const* FuncPtrPtr, registers... Registers>
	using userpurge_adapter = calling_convention_adapter<FuncPtrPtr, true, Registers...>;

	template<auto* const* FuncPtrPtr>
	using fastcall_adapter = calling_convention_adapter<FuncPtrPtr, true, registers::ecx, registers::edx>;
	
#define PushReg(Register) {\
		if constexpr((Register) == registers::eax) __asm { push eax } \
		if constexpr((Register) == registers::ebx) __asm { push ebx } \
		if constexpr((Register) == registers::ecx) __asm { push ecx } \
		if constexpr((Register) == registers::edx) __asm { push edx } \
		if constexpr((Register) == registers::esi) __asm { push esi } \
		if constexpr((Register) == registers::edi) __asm { push edi } \
	}

	template<auto* const* FuncPtrPtr, bool PurgeStack, registers... Registers>
	void __cdecl calling_convention_adapter<FuncPtrPtr, PurgeStack, Registers...>::to_cdecl()
	{
		static_assert(sizeof...(Registers) <= 6, "There can be at most 6 register arguments");

		if constexpr(sizeof...(Registers) == 6) to_cdecl_impl<Registers...>();
		if constexpr(sizeof...(Registers) == 5) to_cdecl_impl<Registers..., registers::none>();
		if constexpr(sizeof...(Registers) == 4) to_cdecl_impl<Registers..., registers::none, registers::none>();
		if constexpr(sizeof...(Registers) == 3) to_cdecl_impl<Registers..., registers::none, registers::none, registers::none>();
		if constexpr(sizeof...(Registers) == 2) to_cdecl_impl<Registers..., registers::none, registers::none, registers::none, registers::none>();
		if constexpr(sizeof...(Registers) == 1) to_cdecl_impl<Registers..., registers::none, registers::none, registers::none, registers::none, registers::none>();
		if constexpr(sizeof...(Registers) == 0) to_cdecl_impl<Registers..., registers::none, registers::none, registers::none, registers::none, registers::none, registers::none>();
	}

	template<auto* const* FuncPtrPtr, bool PurgeStack, registers... Registers>
	template<registers Reg1, registers Reg2, registers Reg3, registers Reg4, registers Reg5, registers Reg6>
	__declspec(naked) void __cdecl calling_convention_adapter<FuncPtrPtr, PurgeStack, Registers...>::to_cdecl_impl()
	{
		static constexpr auto FuncPtr = FuncPtrPtr;
		static constexpr int RegArgCount = sizeof...(Registers);
		static constexpr int TotalArgCount = function_traits<std::remove_pointer_t<decltype(FuncPtrPtr)>>::arg_count;
		static constexpr int TotalArgSize = TotalArgCount * 4;
		static constexpr int StackArgCount = TotalArgCount - RegArgCount;
		static constexpr int StackArgSize = StackArgCount * 4;
		static constexpr int StackArgOffset = StackArgSize + 4;

		static_assert(RegArgCount <= TotalArgCount, "More argument locations that arguments");

		__asm {
			push ebp
			mov ebp, esp
		}

		if constexpr(StackArgCount > 0)
		{
			__asm {
				push esi
				push edi

				; Stack layout(assuming to_cdecl was optimized to a jump)
				; EBP-08h  XXXXXXXX  Old EDI
				; EBP-04h  XXXXXXXX  Old ESI
				; EBP+00h  XXXXXXXX  Old EBP
				; EBP+04h  XXXXXXXX  Return Address
				; EBP+08h  11111111  Stack Argument 1
				; EBP+0Ch  22222222  Stack Argument 2
				; EBP+10h  33333333  Stack Argument 3

				mov esi, ebp
				add esi, StackArgOffset
				mov edi, StackArgCount

			copyArg:
				push dword ptr [esi]
				sub esi, 4
				dec edi
				jnz copyArg

				mov edi, dword ptr [ebp-8]
				mov esi, dword ptr [ebp-4]
			}
		}

		if constexpr(sizeof...(Registers) >= 6) PushReg(Reg6);
		if constexpr(sizeof...(Registers) >= 5) PushReg(Reg5);
		if constexpr(sizeof...(Registers) >= 4) PushReg(Reg4);
		if constexpr(sizeof...(Registers) >= 3) PushReg(Reg3);
		if constexpr(sizeof...(Registers) >= 2) PushReg(Reg2);
		if constexpr(sizeof...(Registers) >= 1) PushReg(Reg1);

		__asm {
			mov eax, FuncPtr
			call eax
		}

		if constexpr(StackArgCount > 0) {
			__asm {
				add esp, TotalArgSize
				pop edi
				pop esi
			}
		}

		if constexpr(PurgeStack)
		{
			__asm {
				pop ebp
				pop ecx
				add esp, StackArgSize
				jmp ecx
			}
		}
		else
		{
			__asm {
				pop ebp
				ret
			}
		}
	}
}


/*
#include <iostream>

using namespace uif::calling_conventions;

void __cdecl func(size_t ecx, size_t edx, size_t stack1, size_t stack2, size_t stack3)
{
	std::cout
		<< "ecx: " << ecx << ", "
		<< "edx: " << edx << ", "
		<< "stack1: " << stack1 << ", "
		<< "stack2: " << stack2 << ", "
		<< "stack3: " << stack3 << "\n";
}

int main()
{
	static constexpr auto* f = func;

	// void (__userpurge *)(size_t ecx@<ecx>, size_t edx@<edx>, size_t stack1, size_t stack2, size_t stack3)
	constexpr auto* userpurge = calling_convention_adapter<&f, true, registers::ecx, registers::edx>::to_cdecl;

	// void (__usercall *)(size_t ecx@<esi>, size_t edx@<edi>, size_t stack1, size_t stack2, size_t stack3)
	constexpr auto* usercall = calling_convention_adapter<&f, false, registers::esi, registers::edi>::to_cdecl;

	volatile int x = 42;

	__asm push 5
	__asm push 4
	__asm push 3
	__asm mov edx, 2
	__asm mov ecx, 1
	userpurge();
	//__asm add esp, 0Ch

	std::cout << x << '\n';

	__asm push 5
	__asm push 4
	__asm push 3
	__asm mov edi, 2
	__asm mov esi, 1
	usercall();
	__asm add esp, 0Ch

	std::cout << x << '\n';
}
//*/