#include <iostream>
#include <memory>

struct IntDeleter {
    void operator()(int *ptr) {

        std::cout << "Deleting int" << std::endl;
        delete ptr;
    }
};

int main() {

    std::unique_ptr<int, IntDeleter> my_ptr(new int);
    return 0;
}
