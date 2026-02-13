#include <algorithm>
#include <array>
#include <iostream>

using std::array;

int main() {

    // going through all elems
    // std::array<int, 5> arr = {1, 2, 3, 4, 5};
    // for (auto i : arr) {
    //     std::cout << i << std::endl;
    // }
    //
    // int countdown = 3;
    //
    // while (countdown > 0) {
    //     std::cout << countdown << std::endl;
    //     countdown--;
    // }
    //
    // std::cout << std::endl;
    // countdown = 3;

    // NOTE: do-while would always evaluate the condition first
    //
    // do {
    //     std::cout << countdown << std::endl;
    //     countdown--;
    // } while (countdown > 0);

    std::array<int, 5> arr;
    // Fill
    std::fill(arr.begin(), arr.end(), 0);
    for (auto i : arr) {
        std::cout << i << std::endl;
    }

    return 0;
}
