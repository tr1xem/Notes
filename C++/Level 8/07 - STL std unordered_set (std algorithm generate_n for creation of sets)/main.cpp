#include <algorithm>
#include <iostream>
#include <iterator>
#include <unordered_set>

int gen() {
    static int i = 0;
    return ++i;
}
void print(std::unordered_set<int> const& set) {
    std::cout << "====================" << std::endl;
    for (auto const& i : set) {
        std::cout << i << ",";
    }
    std::cout << std::endl;
}
int main() {
    std::unordered_set<int> set{1, 2, 3, 4};

    if (!set.contains(12)) {
        set.insert(12);
    }
    print(set);

    // std::unordered_set<int> set2{-1, -2, -3, -4, -5};
    // set.merge(set2);
    //
    // print(set);
    // std::cout << set.bucket_count() << std::endl;
    // std::cout << set.load_factor() << std::endl;

    std::unordered_set<int> set2;
    std::generate_n(std::inserter(set2, set2.begin()), 10, gen);
    print(set2);
    std::cout << set2.bucket_count() << std::endl;
    std::cout << set2.load_factor() << std::endl;
    return 0;
}
