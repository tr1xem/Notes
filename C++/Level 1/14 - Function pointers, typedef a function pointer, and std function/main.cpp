#include <functional>
#include <iostream>

typedef int (*PFnIntegerOperations)(int, int);

int add(int a, int b) { return a + b; }

int multiply(int a, int b) { return a * b; }

int main() {
    // NOTE: function pointer syntax: return-type *name(type1, type2,...)
    //
    // int (*operation)(int, int);

    // NOTE: Using a typedef
    //
    // PFnIntegerOperations operation;

    // NOTE: using std::function
    //
    std::function<int(int, int)> operation;

    operation = add;
    std::cout << "2+3 = " << operation(2, 3) << std::endl;
    operation = multiply;
    std::cout << "2*3 = " << operation(2, 3) << std::endl;
    return 0;
}
