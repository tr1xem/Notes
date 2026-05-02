#include <iostream>

struct Value {
    int m_result{};
    float m_result2{};
    int operator()(int newResult) {
        m_result = newResult;
        return newResult;
    }
    float operator()(float newResult2) {
        m_result2 = newResult2;
        return newResult2;
    }
};

int main() {
    Value v;
    v(10);
    std::cout << v.m_result << std::endl;
    v(12.5f);
    std::cout << v.m_result2 << std::endl;

    return 0;
}
