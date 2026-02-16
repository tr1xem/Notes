#include <iostream>

// NOTE: Without templates
//
//  int square(int x) { return x * x; }
//  double square(double x) { return x * x; }
//  float square(float x) { return x * x; }

template <typename T> T square(T x) { return x * x; }

int main() {
    std::cout << square<int>(5) << std::endl;
    std::cout << square<double>(5.5) << std::endl;
    std::cout << square<float>(6.57) << std::endl;

    return 0;
}
