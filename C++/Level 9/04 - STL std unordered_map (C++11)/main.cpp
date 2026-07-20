#include <ios>
#include <iostream>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

namespace {

struct Edge {
    // Edge(unsigned long v1, unsigned long v2) : v1(v1), v2(v2) {}
    unsigned long v1, v2;
    friend std::ostream& operator<<(std::ostream& os, const Edge& e);
    // Edge() {}
    //
    // Edge(unsigned long v1_, unsigned long v2_) : v1(v1_), v2(v2_) {}
};
std::ostream& operator<<(std::ostream& os, const Edge& e) {
    os << e.v1 << " , " << e.v2;
    return os;
}

}  // namespace

int main() {
    Edge e1(1, 2);
    Edge e2(2, 3);
    Edge e3(3, 4);
    Edge e4(4, 5);
    std::unordered_map<std::string, Edge> mymap{
        {"s1", e1},
        {"s2", e2},
        {"s3", e3},
        {"s4", e4},
    };

    std::cout << "++++++++++++++++++++" << std::endl;
    for (auto& [key, value] : mymap) {
        std::cout << key << " " << value << std::endl;
    }
    std::cout << "++++++++++++++++++++" << std::endl;

    mymap.erase(begin(mymap));
    std::cout << "++++++++++++++++++++" << std::endl;
    for (auto& [key, value] : mymap) {
        std::cout << key << " " << value << std::endl;
    }
    std::cout << "++++++++++++++++++++" << std::endl;

    std::cout << mymap.bucket_count() << "|" << mymap.load_factor()
              << std::endl;
    return 0;
}
