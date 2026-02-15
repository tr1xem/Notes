#include <initializer_list>
#include <iostream>

struct UDT {
    UDT(std::initializer_list<int> data) : m_data(data) {
        std::cout << "initializer list constructor\n";
    }
    UDT(int a, int b, int c) { std::cout << "Constructor with 3 param\n"; }
    ~UDT() {}
    void printData() {
        for (auto i : m_data) {
            std::cout << i << std::endl;
        }
    }

  private:
    std::initializer_list<int> m_data;
};

int main() {

    // List initialization
    UDT u{1, 2, 3};
    // 3 param
    // UDT u(1, 2, 3);
    u.printData();

    return 0;
}
