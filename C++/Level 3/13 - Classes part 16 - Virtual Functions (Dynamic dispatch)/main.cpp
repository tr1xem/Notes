#include <iostream>
class Base {
  public:
    Base() {
        std::cout << "Base Constructor" << std::endl;
        baseData = new int[10];
    }
    // Without virtual destructor, the destructor of the base class will be
    // called if the base type of the var is base
    virtual ~Base() {
        std::cout << "Base Destructor" << std::endl;
        delete[] baseData;
    }
    virtual void MemberFunc() { std::cout << "Base::MemberFunc()\n"; }
    int *baseData;
};

class Derived : public Base {
  public:
    Derived() {
        std::cout << "Derived Constructor" << std::endl;
        derivedData = new int[15];
    }
    ~Derived() {
        std::cout << "Derived Destructor" << std::endl;
        delete[] derivedData;
    }
    void MemberFunc() override { std::cout << "Derived::MemberFunc()\n"; }
    int *derivedData;
};

int main() {

    Base *base = new Derived();
    base->MemberFunc();
    delete base;
    return 0;
}
