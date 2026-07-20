#include <ios>
#include <iostream>
#include <map>
#include <string>
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
    int a;
    a = 5;
    int b = ++a;

    std::vector<int> x;
    x.push_back(a);
    x.push_back(b);
    std::map<std::string, Edge> mymap;

    Edge e1 = Edge(0, 0);

    mymap["edge1"] = e1;
    mymap["edge2"] = Edge(1, 1);

    std::cout << mymap["edge1"] << std::endl;
    std::cout << mymap["edge2"] << std::endl;

    const auto [it, success] = mymap.insert(std::pair("edge3", Edge(2, 2)));
    std::cout << "Inserted? " << std::boolalpha << success << std::endl;
    std::cout << it->second << std::endl;

    return 0;
}
