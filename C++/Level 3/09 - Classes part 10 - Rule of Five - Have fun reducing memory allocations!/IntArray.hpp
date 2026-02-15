#ifndef INT_ARRAY_HPP
#define INT_ARRAY_HPP

#include <string>
class IntArray {
  public:
    // Constructor
    IntArray(std::string name);

    // Destructor
    ~IntArray();

    // Copy Constructor
    IntArray(const IntArray &rhs);

    // Copy Assignment Operator
    IntArray &operator=(const IntArray &rhs);

    // Move Constructor
    IntArray(IntArray &&rhs);

    // Move Assignment Operator
    IntArray &operator=(IntArray &&rhs);

  private:
    std::string m_name;
    int *m_data;
};

#endif
