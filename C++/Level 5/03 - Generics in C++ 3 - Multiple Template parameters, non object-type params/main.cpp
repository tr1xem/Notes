#include <iostream>

template <typename T1, typename T2> void print(T1 a, T2 b) {
    std::cout << a << std::endl << b << std::endl;
}

int main() {
    print<int, double>(5, 3.14);
    return 0;
}
