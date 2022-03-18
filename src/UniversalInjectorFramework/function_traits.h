#pragma once

// function_traits implementation adapted from
// https://devblogs.microsoft.com/oldnewthing/20200713-00/?p=103978
template<typename F> struct function_traits;

template<typename TReturn, typename... TArgs>
struct function_traits<TReturn(* const)(TArgs...)>
{
	using pointer = TReturn(*)(TArgs...);
	using return_type = TReturn;
	static constexpr size_t arg_count = sizeof...(TArgs);
};

template<typename TReturn>
struct function_traits<TReturn(* const)()>
{
	using pointer = TReturn(*)();
	using return_type = TReturn;
	static constexpr size_t arg_count = 0;
};
