#include <iostream>
template <typename T> T square(T input) { return input * input; }

auto square2(auto input) { return input * input; }

int main() {

    std::cout << square<int>(5) << std::endl;
    std::cout << square2(5) << std::endl;

    return 0;
}
