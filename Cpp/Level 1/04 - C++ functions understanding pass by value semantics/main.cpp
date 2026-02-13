#include <iostream>

void SetValue(int &arg) {
    std::cout << "SetValue called with arg = " << arg << std::endl;
    arg = 10;
    std::cout << "SetValue after - arg = " << arg << std::endl;
}
int main() {

    int x = 5;
    std::cout << "x = " << x << std::endl;
    std::cout << "&x = " << &x << std::endl;

    SetValue(x);

    std::cout << "x = " << x << std::endl;
    std::cout << "&x = " << &x << std::endl;

    return 0;
}
