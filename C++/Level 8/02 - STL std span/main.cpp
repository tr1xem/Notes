#include <array>
#include <iostream>
#include <span>
// void print(std::array<int, 4> arr) {
//     for (auto& ele : arr) {
//         std::cout << ele << std::endl;
//     }
// }

void print(std::span<int> arr) {
    for (auto& ele : arr) {
        std::cout << ele << std::endl;
    }
}
int main() {
    std::array<int, 4> arr = {1, 2, 3, 4};
    // print(arr);

    std::span arrr{arr};
    std::cout << arrr.extent << std::endl;

    return 0;
}
