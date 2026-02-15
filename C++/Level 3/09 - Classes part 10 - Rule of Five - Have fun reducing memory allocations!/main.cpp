#include "IntArray.hpp"
#include <string>
#include <vector>

int main() {
    std::vector<IntArray> myvector;
    myvector.reserve(10);
    for (int i = 0; i < 10; i++) {
        IntArray temp(std::to_string(i));
        myvector.push_back(std::move(temp));
    }
}
