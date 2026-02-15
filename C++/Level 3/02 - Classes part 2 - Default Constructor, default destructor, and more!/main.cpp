#include "student.hpp"

int main() {

    Student trix("trix");
    // trix.m_name = "Trix";
    trix.printName();

    Student foo;
    foo.m_name = "foo";
    foo.printName();
    return 0;
}
