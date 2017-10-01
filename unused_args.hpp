// Use to suppress unused parameters and variables in a cross-platform manner without macros

#pragma once

#include <utility>

template <typename T1>
constexpr void unused_args(T1&& t1)
{
    (void)t1;
}

template <typename T1, typename... Args>
constexpr void unused_args(T1&& t1, Args&&... args)
{
    (void)t1;
    unused_args(std::forward<Args>(args)...);
}
