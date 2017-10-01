# unused_args

A small header only library to suppress unused variable and parameter warnings in a cross-platform manner without the use of macros.

## Sample
```c++
#include <iostream>
#include <unused_args/unused_args.hpp>

constexpr int add(int a, int b) {
    unsigned i{};
    unused_args(i);

    return a + b;
}

void func(unsigned number, const int version) {
    unsigned tmp1{};
    unsigned tmp2{};
    unused_args(tmp1, tmp2);

    std::cout << number << std::endl;
}

int main(int a, char**) {
    func(add(10, 100), 1);

    return 0;
}
```