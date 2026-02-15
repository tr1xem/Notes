#include <iostream>
#include <string>
class TopLevel {

  public:
    TopLevel(std::string arg) {
        std::cout << "TopLevel Constructor: " << arg << std::endl;
    }
};
class EntityBase : TopLevel {

  public:
    EntityBase() : TopLevel("arg") {
        std::cout << "EntityBase Constructor" << std::endl;
    }
    EntityBase(std::string name) : m_name(name), TopLevel("arg") {
        std::cout << "EntityBase Constructor: " << m_name << std::endl;
    }
    ~EntityBase() { std::cout << "EntityBase Destructor" << std::endl; }

  private:
    std::string m_name;
};

class Monster : public EntityBase {
  public:
    Monster() : EntityBase("monster") {
        std::cout << "Monster Constructor" << std::endl;
    }
    ~Monster() { std::cout << "Monster Destructor" << std::endl; }
};

int main() {
    // Monster badMonster("creeper");
    Monster badMonster;

    return 0;
}
