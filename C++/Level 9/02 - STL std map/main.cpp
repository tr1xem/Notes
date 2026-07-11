#include <iostream>
#include <map>
#include <string>

struct Edge {
    // Edge(unsigned long &v1, unsigned long &v2) : v1(v1), v2(v2) {}
    unsigned long v1, v2;
    friend std::ostream& operator<<(std::ostream& os, const Edge& e);
};

std::ostream& operator<<(std::ostream& os, const Edge& e) {
    os << e.v1 << " , " << e.v2;
    return os;
}

int main() {
    std::map<std::string, Edge> mymap;

    mymap["edge1"] = Edge(0, 0);
    mymap["edge2"] = Edge(1, 1);

    std::cout << mymap["edge1"] << std::endl;
    std::cout << mymap["edge2"] << std::endl;
    return 0;
}
