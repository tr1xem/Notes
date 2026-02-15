#include "student.hpp"
#include <iostream>
Student::Student() {
    m_name = "No Name";
    std::cout << "Called Constructor of Student named: " << m_name << std::endl;
};
Student::Student(std::string name) {
    m_name = name;
    std::cout << "Called Constructor of Student named: " << m_name << std::endl;
};
Student::~Student() {
    std::cout << "Called Destructor of Student named: " << m_name << std::endl;
};
void Student::printName() { std::cout << "name is " << m_name << std::endl; };
