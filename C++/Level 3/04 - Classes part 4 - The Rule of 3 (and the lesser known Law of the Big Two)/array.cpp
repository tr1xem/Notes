#include "array.hpp"
#include <iostream>
array::array() {
    std::cout << "Constructor" << std::endl;
    data = new int[10];
    for (int i = 0; i < 10; i++) {
        data[i] = i * i;
    }
}

array::~array() { delete[] data; }

array::array(const array &rhs) {
    std::cout << "Copy Constructor" << std::endl;
    // delete[] data;
    data = new int[10];
    for (int i = 0; i < 10; i++) {
        data[i] = rhs.data[i];
    }
}
array &array::operator=(const array &rhs) {
    std::cout << "Copy Assignment Operator" << std::endl;
    if (&rhs == this) {
        return *this;
    }
    if (data != nullptr) {
        delete[] data;
    }
    data = new int[10];
    for (int i = 0; i < 10; i++) {
        data[i] = rhs.data[i];
    }
    return *this;
}

void array::PrintingData() {
    for (int i = 0; i < 10; i++) {
        std::cout << data[i] << std::endl;
    }
}

void array::SetData(int index, int value) { data[index] = value; }
