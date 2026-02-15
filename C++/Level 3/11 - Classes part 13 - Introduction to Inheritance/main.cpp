#include <iostream>

class Dog { // Base class
  public:
    Dog() : x(0), y(0) {}

    void bark() { std::cout << "Woof woof woof woof woof woof woof woof\n"; }
    void move() {
        x++;
        y++;
    }

  private:
    int x, y;
};

class Golden : public Dog {
  public:
    void Retrive() { std::cout << "Retriving the stick!!!!!\n"; }
};
class Huskey : public Dog {

  public:
    void Swim() { std::cout << "Swimming in the ocean\n"; }
};

int main() {
    Golden chippu;
    chippu.bark();
    chippu.move();
    chippu.Retrive();

    Huskey goglu;
    goglu.bark();
    goglu.move();
    goglu.Swim();
    return 0;
}
