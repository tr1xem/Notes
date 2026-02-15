#include "IntArray.hpp"
#include <chrono>
#include <iostream>

IntArray::IntArray(std::string name) : m_name(name), m_data(new int[10]) {
    std::cout << "Constructor for: " << m_name << std::endl;
}

IntArray::~IntArray() {
    std::cout << "Destructor for: " << m_name << std::endl;
    delete[] m_data;
}

IntArray::IntArray(const IntArray &rhs) {

    std::cout << "Copy Constructor for: " << m_name << std::endl;
    m_name = rhs.m_name;
    m_data = new int[10];
    for (int i = 0; i < 10; i++) {
        m_data[i] = rhs.m_data[i];
    }
}

IntArray &IntArray::operator=(const IntArray &rhs) {
    std::cout << "Copy Assignment Operator for: " << m_name << std::endl;
    if (&rhs == this) {
        return *this;
    } else {
        m_name = rhs.m_name;
        delete[] m_data;
        m_data = new int[10];
        for (int i = 0; i < 10; i++) {
            m_data[i] = rhs.m_data[i];
        }
        return *this;
    }
}

IntArray::IntArray(IntArray &&rhs) {
    std::cout << "Move Constructor for: " << m_name << std::endl;
    m_name = rhs.m_name;
    rhs.m_name = "";
    m_data = rhs.m_data;
    rhs.m_data = nullptr;
}

IntArray &IntArray::operator=(IntArray &&rhs) {
    std::cout << "Move Assignment Operator for: " << m_name << std::endl;
    if (&rhs == this) {
        return *this;
    } else {
        m_name = rhs.m_name;
        rhs.m_name = "";
        delete[] m_data;
        m_data = rhs.m_data;
        rhs.m_data = nullptr;
        return *this;
    }
}
