#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <vector>
class array {
  public:
    // 1. Constructor
    array();

    // 2. Destructor
    ~array();

    // 3 Copy Constructor
    array(const array &rhs);
    // 4 or 3 Copy Assignment Operator
    // Obj is already constructed we are just making a copy later
    array &operator=(const array &rhs);

    void PrintingData();
    void SetData(int index, int value);

  private:
    std::vector<int> data;
};

#endif
