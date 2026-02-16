#include <cstdlib>
#include <iostream>
template <typename T> bool equals(T a, T b) {

    std::cout << "GENERAL" << std::endl;
    return a == b;
}

// Specialization for equal
template <> bool equals<float>(float a, float b) {
    std::cout << "FLOAT" << std::endl;
    return std::abs(a - b) < 0.000001f;
}

int main() {
    std::cout << equals<int>(5, 5) << std::endl;
    std::cout << equals<float>(1.0f - 0.999999f, 0.000001f) << std::endl;
    return 0;
}
