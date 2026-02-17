#include <iostream>
#include <variant>

union U {
  int i;
  short s;
};
int main() {
  std::variant<int, float> data;
  std::cout << "U :" << sizeof(U) << std::endl;
  data = 8.0f;
  if (auto attémpt = std::get_if<float>(&data)) {
    std::cout << "we found a float" << std::endl;
  }

  std::cout << "data :" << std::get<float>(data) << std::endl;

  return 0;
};
