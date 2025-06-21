#pragma once

template <typename T, typename U>
auto add(T a, U b) -> decltype(a + b)
{
	return a + b;
}