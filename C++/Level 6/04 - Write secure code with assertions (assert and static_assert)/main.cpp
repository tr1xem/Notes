#include <cassert>
#include <iostream>

int main() {
  // Would fail at run time
  // int age = -7;
  // assert(age >= 0);

  // Would fail at compile time
  constexpr int age = -7;
  static_assert(age > 0, "Age is less than zero");
  return 0;
}
