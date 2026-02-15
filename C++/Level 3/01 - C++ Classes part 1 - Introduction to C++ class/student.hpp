#ifndef STUDENT_HPP
#define STUDENT_HPP
#include <string>

class Student {
  public:
    // Action - Constructor
    Student();
    // Action - Destructor
    ~Student();
    // Action - Print Name
    void printName();

  public:
    std::string m_name;
};

#endif
