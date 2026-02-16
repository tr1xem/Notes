#include "Person.hpp"
#include <iostream>

int main() {
    Person p("Trix");
    std::cout << p.GetAttributes() << std::endl;
    return 0;
}
