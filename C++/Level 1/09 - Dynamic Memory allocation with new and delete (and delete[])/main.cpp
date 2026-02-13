#include <iostream>

int main() {
    int x;
    std::cin >> x;
    // NOTE: The problem with this is if we cin a no greater than our stack
    // bound then we would get a seg fault so this is not a good way of dyanmic
    // memory allocation
    //
    // int arr[x];

    // NOTE: Now here we are using new and delete to allocate memory on the heap
    // so no more seg faults as we are dynamically allocating memory
    int *arr = new int[x];
    for (int i = 0; i < x; i++) {
        arr[i] = i;
    }

    for (int i = 0; i < x; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    // NOTE: [] tells it to delete whole array
    delete[] arr;

    return 0;
}
