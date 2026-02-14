#include <iostream>
#include <memory>

class UDT {
  public:
    UDT() { std::cout << "UDT constructor called" << std::endl; }
    ~UDT() { std::cout << "UDT destructor called" << std::endl; }
};
int main() {

    // Creating our shared pointer
    std::shared_ptr<UDT> ptr1 = std::make_shared<UDT>();

    // Then, in a new scope, I share the resource
    {
        // Would not update the reference count
        std::weak_ptr<UDT> ptr2 = ptr1;
        std::cout << "use count = " << ptr2.use_count() << std::endl;
    } // Then, 'ptr2' is 'freed'

    // Then we check our updated reference count
    std::cout << "use count = " << ptr1.use_count() << std::endl;

    return 0;
}
