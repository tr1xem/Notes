#include <iostream>

void foo() {
    static int x{};
    x++;

    std::cout << x << std::endl;
}
int main() {
    for (int i = 0; i < 10; i++) {
        foo();
    }
    return 0;
}
