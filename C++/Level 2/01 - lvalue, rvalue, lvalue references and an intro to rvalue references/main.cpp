#include <iostream>
#include <string>

int main() {
    int i = 19;
    // Wont work
    // int &ref = 10;
    // Work
    // const int &ref = 10;

    std::string s = "Hello World";
    std::string t = "from C++";
    // NOTE:: this is invoking copy assignment operator it would first create a
    // temporary string then do operation and copy it to final
    // After the value is copied in final then final becomes a rvalue
    std::string final = s + t;
    // NOTE: this produces a temporary string but final2 is a rvalue reference
    std::string &&final2 = s + t;
    int &&rvref = 10;
    std::cout << rvref << std::endl;

    return 0;
}
