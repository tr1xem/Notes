
#include <iostream>
#include <string>

struct Entity {
    std::string name;
    int x{1};
    int y{7};
    int *collection{nullptr};
};

int main() {

    Entity e{};

    std::cout << e.name << std::endl;
    std::cout << e.x << std::endl;
    std::cout << e.y << std::endl;
    std::cout << e.collection << std::endl;

    return 0;
}
