#include <cassert>
#include <iostream>
template <typename T, typename U>
T add(T a, U b) {
  return a + b;
}

int main() {
  // Would fail at run time
  // int age = -7;
  // assert(age >= 0);

  int sum{};
  sum = add(1, 2);
  std::cout << sum << std::endl;
  // Would fail at compile time
  constexpr int age = -7;
  // static_assert(age > 0, "Age is less than zero");
  return 0;
}
