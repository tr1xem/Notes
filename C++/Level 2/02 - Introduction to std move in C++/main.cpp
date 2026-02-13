#include <iostream>
#include <string>

int main() {
    std::string s = "Hello World";
    std::string t;

    std::cout << "Before move: " << s << std::endl;
    std::cout << "Before move: " << t << std::endl;
    t = std::move(s);
    std::cout << "After move: " << s << std::endl;
    std::cout << "After move: " << t << std::endl;
    return 0;
}
