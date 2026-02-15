#include <iostream>
struct Point2D {
    int x, y;
};

class Character {
  public:
    Character(Point2D &home) : ref_home(home) {};
    ~Character() {}

  private:
    Point2D m_direction;
    Point2D &ref_home;
};

Point2D somepoint;
int main() {

    Character trix(somepoint);
    return 0;
}
