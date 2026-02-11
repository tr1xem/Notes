#include <array>
#include <iostream>
#include <iterator>
#include <numeric>

int main() {

    // NOTE: Standard array
    //
    //  int arr[5];

    // NOTE: Standard array with initializer list
    std::array<int, 5> arr;

    // NOTE: Iota fills contiguous sequence of numbers starting from (here) 0
    std::iota(std::begin(arr), std::end(arr), 0);

    for (int i{0}; i < 5; ++i) {
        std::cout << arr.at(i) << " ";
    }

    return 0;
}
