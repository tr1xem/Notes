#include <iostream>
#include <set>

int main() {
    std::set<int> set{1, 2, 3, 4, 5};
    // Wont do anything as we cant have depulicate value
    set.insert(1);
    set.insert(-5);

    std::cout << "4?" << set.count(4) << std::endl;

    for (auto const& i : set) {
        std::cout << i << std::endl;
    }

    auto found = set.find(4);

    // or just do .contains
    if (found != set.end()) {
        std::cout << "Found" << std::endl;
        set.erase(found);
    }
    for (auto const& i : set) {
        std::cout << i << std::endl;
    }

    return 0;
}
