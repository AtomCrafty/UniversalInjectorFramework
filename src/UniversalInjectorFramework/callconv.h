#pragma once

#include <algorithm>
#include <type_traits>

#include "function_traits.h"

namespace uif::calling_conventions
{
	enum class registers : char
	{
		none, eax, ebx, ecx, edx, esi, edi
	};

	template<auto* const* FuncPtrPtr, bool PurgeStack, registers... Registers>
	class calling_convention_adapter
	{
	public:
		static void to_cdecl();

		template<typename TReturn, typename... TArgs>
		static TReturn __cdecl from_cdecl(TArgs...);

	private:
		template<registers Reg1, registers Reg2, registers Reg3, registers Reg4, registers Reg5, registers Reg6>
		static void to_cdecl_impl();

		template<registers Reg1, registers Reg2, registers Reg3, registers Reg4, registers Reg5, registers Reg6, typename TReturn, typename... TArgs>
		static TReturn __cdecl from_cdecl_impl(TArgs...);

		static constexpr size_t TotalArgCount = function_traits<std::remove_pointer_t<std::remove_reference_t<decltype(FuncPtrPtr)>>>::arg_count;
		static constexpr size_t TotalArgSize = TotalArgCount * 4;
		static constexpr size_t RegArgCount = std::min(TotalArgCount, sizeof...(Registers));
		static constexpr size_t StackArgCount = TotalArgCount - RegArgCount;
		static constexpr size_t StackArgSize = StackArgCount * 4;
	};

	template<auto* FuncPtr>
	struct func_ptr_buffer
	{
		static constexpr auto buffer = FuncPtr;
	};

	template<auto* FuncPtr, bool PurgeStack, registers... Registers>
	using calling_convention_adapter_with_buffer = calling_convention_adapter<&func_ptr_buffer<FuncPtr>::buffer, PurgeStack, Registers...>;

	template<auto* const* FuncPtrPtr, registers... Registers>
	using usercall_adapter_indirect = calling_convention_adapter<FuncPtrPtr, false, Registers...>;
	template<auto* FuncPtr, registers... Registers>
	using usercall_adapter = calling_convention_adapter_with_buffer<FuncPtr, false, Registers...>;

	template<auto* const* FuncPtrPtr, registers... Registers>
	using userpurge_adapter_indirect = calling_convention_adapter<FuncPtrPtr, true, Registers...>;
	template<auto* FuncPtr, registers... Registers>
	using userpurge_adapter = calling_convention_adapter_with_buffer<FuncPtr, true, Registers...>;

	template<auto* const* FuncPtrPtr>
	using fastcall_adapter_indirect = calling_convention_adapter<FuncPtrPtr, true, registers::ecx, registers::edx>;
	template<auto* FuncPtr>
	using fastcall_adapter = calling_convention_adapter_with_buffer<FuncPtr, true, registers::ecx, registers::edx>;

#define PushReg(Register) {\
		if constexpr((Register) == registers::eax) __asm { push eax } \
		if constexpr((Register) == registers::ebx) __asm { push ebx } \
		if constexpr((Register) == registers::ecx) __asm { push ecx } \
		if constexpr((Register) == registers::edx) __asm { push edx } \
		if constexpr((Register) == registers::esi) __asm { push esi } \
		if constexpr((Register) == registers::edi) __asm { push edi } \
	}

#define PopReg(Register) {\
		if constexpr((Register) == registers::eax) __asm { pop eax } \
		if constexpr((Register) == registers::ebx) __asm { pop ebx } \
		if constexpr((Register) == registers::ecx) __asm { pop ecx } \
		if constexpr((Register) == registers::edx) __asm { pop edx } \
		if constexpr((Register) == registers::esi) __asm { pop esi } \
		if constexpr((Register) == registers::edi) __asm { pop edi } \
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
		static constexpr auto* FuncPtr = *FuncPtrPtr;
		static constexpr size_t StackArgOffset = StackArgSize + 4;

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

		if constexpr(RegArgCount >= 6) PushReg(Reg6);
		if constexpr(RegArgCount >= 5) PushReg(Reg5);
		if constexpr(RegArgCount >= 4) PushReg(Reg4);
		if constexpr(RegArgCount >= 3) PushReg(Reg3);
		if constexpr(RegArgCount >= 2) PushReg(Reg2);
		if constexpr(RegArgCount >= 1) PushReg(Reg1);

		__asm {
			mov eax, FuncPtr
			call eax
			add esp, TotalArgSize
		}

		if constexpr(StackArgCount > 0) {
			__asm {
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

	template <auto* const* FuncPtrPtr, bool PurgeStack, registers... Registers>
	template <typename TReturn, typename... TArgs>
	TReturn __cdecl calling_convention_adapter<FuncPtrPtr, PurgeStack, Registers...>::from_cdecl(TArgs... args)
	{
		static_assert(sizeof...(Registers) <= 6, "There can be at most 6 register arguments");

		if constexpr(sizeof...(Registers) == 6) return from_cdecl_impl<Registers..., TReturn, TArgs...>(args...);
		if constexpr(sizeof...(Registers) == 5) return from_cdecl_impl<Registers..., registers::none, TReturn, TArgs...>(args...);
		if constexpr(sizeof...(Registers) == 4) return from_cdecl_impl<Registers..., registers::none, registers::none, TReturn, TArgs...>(args...);
		if constexpr(sizeof...(Registers) == 3) return from_cdecl_impl<Registers..., registers::none, registers::none, registers::none, TReturn, TArgs...>(args...);
		if constexpr(sizeof...(Registers) == 2) return from_cdecl_impl<Registers..., registers::none, registers::none, registers::none, registers::none, TReturn, TArgs...>(args...);
		if constexpr(sizeof...(Registers) == 1) return from_cdecl_impl<Registers..., registers::none, registers::none, registers::none, registers::none, registers::none, TReturn, TArgs...>(args...);
		if constexpr(sizeof...(Registers) == 0) return from_cdecl_impl<Registers..., registers::none, registers::none, registers::none, registers::none, registers::none, registers::none, TReturn, TArgs...>(args...);

		return TReturn();
	}

	template<auto* const* FuncPtrPtr, bool PurgeStack, registers... Registers>
	template<registers Reg1, registers Reg2, registers Reg3, registers Reg4, registers Reg5, registers Reg6, typename TReturn, typename... TArgs>
	__declspec(naked) TReturn __cdecl calling_convention_adapter<FuncPtrPtr, PurgeStack, Registers...>::from_cdecl_impl(TArgs...)
	{
		static constexpr auto* const* FuncPtrPtrField = FuncPtrPtr;
		static constexpr size_t StackArgOffset = TotalArgSize + 4;

		__asm {
			push ebp
			mov ebp, esp
			push ebx
			push esi
			push edi

			add esp, 14h
		}

		if constexpr(RegArgCount >= 1) PopReg(Reg1);
		if constexpr(RegArgCount >= 2) PopReg(Reg2);
		if constexpr(RegArgCount >= 3) PopReg(Reg3);
		if constexpr(RegArgCount >= 4) PopReg(Reg4);
		if constexpr(RegArgCount >= 5) PopReg(Reg5);
		if constexpr(RegArgCount >= 6) PopReg(Reg6);

		__asm {
			mov esp, ebp
			sub esp, 0Ch
		}

		if constexpr(StackArgCount > 0)
		{
			__asm {
				push esi
				push edi

				; Stack layout (assuming from_cdecl was optimized to a jump)
				; EBP-14h  XXXXXXXX  New EDI(may contain argument)
				; EBP-10h  XXXXXXXX  New ESI(may contain argument)
				; EBP-0Ch  XXXXXXXX  Old EDI
				; EBP-08h  XXXXXXXX  Old ESI
				; EBP-04h  XXXXXXXX  Old EBX
				; EBP+00h  XXXXXXXX  Old EBP
				; EBP+04h  XXXXXXXX  Return Address
				; EBP+08h  11111111  Stack Argument 1
				; EBP+0Ch  22222222  Stack Argument 2
				; EBP+10h  33333333  Stack Argument 3

				mov esi, ebp
				add esi, StackArgOffset
				mov edi, StackArgCount

				copyArg :
				push dword ptr [esi]
					sub esi, 4
					dec edi
					jnz copyArg

					mov edi, dword ptr [ebp-14h]
					mov esi, dword ptr [ebp-10h]
			}
		}

		// ebp is the only available register to hold the function address
		__asm {
			mov ebp, FuncPtrPtrField
			mov ebp, [ebp]
			call ebp
		}

		// callee did not purge the stack, so we have to do it
		if constexpr(!PurgeStack)
		{
			__asm add esp, StackArgSize
		}

		__asm {
			add esp, 8
			pop edi
			pop esi
			pop ebx
			pop ebp
			ret
		}
	}
}


/*
#include <iostream>

using namespace uif::calling_conventions;

void __cdecl cdecl_func(size_t ecx, size_t edx, size_t stack1, size_t stack2, size_t stack3)
{
	std::cout
		<< "ecx: " << ecx << ", "
		<< "edx: " << edx << ", "
		<< "stack1: " << stack1 << ", "
		<< "stack2: " << stack2 << ", "
		<< "stack3: " << stack3 << "\n";
}

void __declspec(naked) userpurge_func(size_t ecx, size_t edx, size_t stack1, size_t stack2, size_t stack3)
{
	static constexpr auto* func = cdecl_func;

	__asm {
		push ebp
		mov ebp, esp

		push dword ptr[ebp + 10h]
		push dword ptr[ebp + 0Ch]
		push dword ptr[ebp + 08h]
		push edx
		push ecx

		call func
		add esp, 14h

		pop ebp
		retn 0Ch
	}
}

void __declspec(naked) usercall_func(size_t ecx, size_t edx, size_t stack1, size_t stack2, size_t stack3)
{
	static constexpr auto* func = cdecl_func;

	__asm {
		push ebp
		mov ebp, esp

		push dword ptr[ebp + 10h]
		push dword ptr[ebp + 0Ch]
		push dword ptr[ebp + 08h]
		push edi
		push esi

		call func
		add esp, 14h

		pop ebp
		ret
	}
}

int test_to_cdecl()
{
	// void (__userpurge *)(size_t ecx@<ecx>, size_t edx@<edx>, size_t stack1, size_t stack2, size_t stack3)
	constexpr auto* userpurge = userpurge_adapter<cdecl_func, registers::ecx, registers::edx>::to_cdecl;

	// void (__usercall *)(size_t ecx@<esi>, size_t edx@<edi>, size_t stack1, size_t stack2, size_t stack3)
	constexpr auto* usercall = usercall_adapter<cdecl_func, registers::esi, registers::edi>::to_cdecl;

	int espVal = 0;

	__asm mov espVal, esp
	std::cout << "ESP: " << espVal << '\n';

	__asm push 5
	__asm push 4
	__asm push 3
	__asm mov edx, 2
	__asm mov ecx, 1
	userpurge();
	//__asm add esp, 0Ch

	__asm mov espVal, esp
	std::cout << "ESP: " << espVal << '\n';

	__asm push 5
	__asm push 4
	__asm push 3
	__asm mov edi, 2
	__asm mov esi, 1
	usercall();
	__asm add esp, 0Ch

	__asm mov espVal, esp
	std::cout << "ESP: " << espVal << '\n';
}

int test_from_cdecl()
{
	// void (__userpurge *)(size_t ecx@<ecx>, size_t edx@<edx>, size_t stack1, size_t stack2, size_t stack3)
	constexpr auto* userpurge = userpurge_adapter<userpurge_func, registers::ecx, registers::edx>::from_cdecl<void, size_t, size_t, size_t, size_t, size_t>;

	// void (__usercall *)(size_t ecx@<esi>, size_t edx@<edi>, size_t stack1, size_t stack2, size_t stack3)
	constexpr auto* usercall = usercall_adapter<usercall_func, registers::esi, registers::edi>::from_cdecl<void, size_t, size_t, size_t, size_t, size_t>;

	int espVal = 0;

	__asm mov espVal, esp
	std::cout << "ESP: " << espVal << '\n';

	userpurge(1, 2, 3, 4, 5);

	__asm mov espVal, esp
	std::cout << "ESP: " << espVal << '\n';

	usercall(1, 2, 3, 4, 5);

	__asm mov espVal, esp
	std::cout << "ESP: " << espVal << '\n';
}

int main()
{
	return test_from_cdecl();
}
//*/