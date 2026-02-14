#include <iostream>

class Student {
  public:
    Student() { std::cout << "Called Constructor of Student" << std::endl; };
    ~Student() { std::cout << "Called Destructor of Student" << std::endl; };
};

int main() { return 0; }
