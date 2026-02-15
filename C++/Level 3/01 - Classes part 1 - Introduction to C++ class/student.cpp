#include "student.hpp"
#include <iostream>
Student::Student() {
    std::cout << "Called Constructor of Student" << std::endl;
};
Student::~Student() {
    std::cout << "Called Destructor of Student named: " << m_name << std::endl;
};
void Student::printName() { std::cout << "name is " << m_name << std::endl; };
