#include <iomanip>
#include <ios>
#include <iostream>

int main() {
    std::cout << std::fixed;
    std::cout << std::setprecision(6);

    // NOTE: C Style casts
    std::cout << ((float)7 / 5) << std::endl;
    return 0;
}
