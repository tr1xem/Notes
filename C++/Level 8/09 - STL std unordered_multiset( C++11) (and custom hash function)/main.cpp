#include <iostream>
#include <unordered_set>  // unordered multiset part of same header

// Example helper class
struct Custom {
    int field1;
    int field2;

    // Constructor
    Custom(int _field1, int _field2) : field1(_field1), field2(_field2) {}

    // Need an equality operator if we have unordered_set
    bool operator==(const Custom& rhs) const {
        return (field1 == rhs.field1 && field2 == rhs.field2);
    }

    // Helper function to print
    void print() const {
        std::cout << "(" << field1 << "," << field2
                  << ")\t= " << field1 + field2 << std::endl;
    }
};

static Custom gen() {
    static int i = 0;
    static int j = 0;
    return {++i, ++j};
}
static Custom gen_duplicates() {
    static int i = 0;
    static int j = 0;
    return {++i, ++j};
}

// In the case that you don't have the ability to modify
// the class, write a function
struct hash {
    // Don't forget the 'const' at the end, cannot have
    // comparison if we modify internals
    constexpr std::size_t operator()(const Custom& c) const noexcept {
        return c.field1 + c.field2;
    }
};

// Helper function to print out the buckets
void PrintUnorderedBuckets(const std::unordered_multiset<Custom, hash>& b) {
    for (int i = 0; i < b.bucket_count(); ++i) {
        auto it = b.begin(i);
        auto end = b.end(i);

        std::cout << "======== Bucket " << i << "========" << std::endl;
        while (it != end) {
            it->print();
            ++it;
        }
    }
}

int main() {
    std::unordered_multiset<Custom, hash> o_multi;

    // Insert a bunch of custom elements into our set

    std::generate_n(std::inserter(o_multi, o_multi.begin()), 5, gen);

    // Repeat insertion with another generate that gives
    // us a bunch of duplicates

    std::generate_n(std::inserter(o_multi, o_multi.begin()), 5, gen_duplicates);

    // Print out the contents of the structure
    std::for_each(o_multi.cbegin(), o_multi.cend(),
                  [](const Custom& c) { c.print(); });

    std::cout << std::endl;
    std::cout << "size : " << o_multi.size() << std::endl;
    std::cout << "buckets: " << o_multi.bucket_count() << std::endl;
    std::cout << "load : " << o_multi.load_factor() << std::endl;

    PrintUnorderedBuckets(o_multi);

    return 0;
}
