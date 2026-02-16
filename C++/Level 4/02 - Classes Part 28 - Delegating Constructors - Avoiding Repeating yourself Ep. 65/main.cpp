#include <iostream>
#include <string>

struct Entity {
    Entity() : name(""), x{0}, y{0}, collection{nullptr} { init(); }

    // Delegating Constructors
    Entity(std::string _name) : Entity() { name = _name; }

    Entity(int _x, int _y) : Entity() {
        x = _x;
        y = _y;
    }

    std::string name;
    int x{0};
    int y{0};
    int *collection{nullptr};

  private:
    void init() {
        x = 5;
        y = 7;
    }
};

int main() {

    Entity e(9, 10);

    std::cout << e.name << std::endl;
    std::cout << e.x << std::endl;
    std::cout << e.y << std::endl;
    std::cout << e.collection << std::endl;

    return 0;
}
