#include <iostream>

struct API {
    API() {}
    ~API() {}

    static int MAJOR;
    static int MINOR;
};

int API::MAJOR = 7;

int main() {
    // API instance;
    // instance.MAJOR = 7;
    std::cout << "Major:" << API::MAJOR << '\n';

    return 0;
}
