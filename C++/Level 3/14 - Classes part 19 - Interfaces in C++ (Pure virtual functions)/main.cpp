#include <iostream>

class IRender {
  public:
    // We dont really want to have render = IRender
    // Now this is purely virtual
    virtual void draw() = 0;
    void update() {};
};

class openGL : public IRender {
  public:
    void draw() override { std::cout << "OpenGL drawing rn!!!" << std::endl; };
};
class vulkan : public IRender {
  public:
    void draw() override { std::cout << "Vulkan drawing rn!!!" << std::endl; };
};
int main() {

    IRender *render = new openGL();
    render->draw();

    return 0;
}
