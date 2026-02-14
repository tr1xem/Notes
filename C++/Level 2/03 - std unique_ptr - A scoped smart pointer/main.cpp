#include <iostream>
#include <memory>

class UDT {
  public:
    UDT() { std::cout << "UDT constructor called" << std::endl; }
    ~UDT() { std::cout << "UDT destructor called" << std::endl; }
};
int main() {

    // NOTE: Raw pointers do not delete themself when they go out of scope
    //  UDT *mytype = new UDT;
    //  UDT *mytype2 = mytype; VALID
    //
    // NOTE: This would auto delete the UDT when it goes out of scope
    std::unique_ptr<UDT> mytype = std::unique_ptr<UDT>(new UDT);
    // std::unique_ptr<UDT> mytype2 = mytype; INVALID
    std::unique_ptr<UDT> mytype2 = std::move(mytype); // VALID

    // Create an ‘array' that is pointed 'toT by one l]nique ptr
    std::unique_ptr<UDT[]> type_array = std::unique_ptr<UDT[]>(new UDT[10]);

    // The equivalent, to the line above is
    std::unique_ptr<UDT[]> type_array2 = std::make_unique<UDT[]>(10);
    return 0;
}
