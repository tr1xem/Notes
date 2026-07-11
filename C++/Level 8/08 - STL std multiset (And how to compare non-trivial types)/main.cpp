#include <iostream>
#include <set>

// Example helper class
struct Custom {
    int fieldl;
    int field2;

    // Constructor
    Custom(int _fieldl, int _field2) : fieldl(_fieldl), field2(_field2) {}

    // Comparison

    bool operator<(const Custom& rhs) const {
        int lhs_sum = fieldl + field2;
        int rhs_sum = rhs.fieldl + rhs.field2;
        return lhs_sum < rhs_sum;
    }

    // Helper function to print
    void print() const {
        std::cout << "(" << fieldl << "," << field2 << ")" << std::endl;
    }
};

// In the case that you don't have the ability to modify
// the class, write a function
struct compare {
    // Don't forget the 'const' at the end, cannot have
    // comparison if we modify internals
    constexpr bool operator()(const Custom& lhs, const Custom& rhs) const {
        int lhs_sum = lhs.fieldl + lhs.field2;
        int rhs_sum = rhs.fieldl + rhs.field2;
        return lhs_sum < rhs_sum;
    }
};

int main() {
    // std::multiset<int> multiset{1, 2, 5, 9, 9};
    //
    // auto it = multiset.find(9);
    // multiset.erase(it);
    // std::cout << "9?" << multiset.count(9) << std::endl;

    std::multiset<Custom, compare> multi;

    Custom c0(1, 6);
    Custom c1(2, 7);
    Custom c2(2, 7);
    Custom c3(9, -5);

    multi.insert(c0);
    multi.insert(c1);
    multi.insert(c2);
    multi.insert(c3);
    std::for_each(multi.cbegin(), multi.cend(),
                  [](const Custom& c) { c.print(); });

    return 0;
}
