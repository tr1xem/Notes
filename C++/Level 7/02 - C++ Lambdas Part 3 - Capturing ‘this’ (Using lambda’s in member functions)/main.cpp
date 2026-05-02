#include <iostream>

struct MyStruct {
    void Functions() {
        // Lambda are const by default
        auto lambda = [obj = this]() mutable {
            obj->counter++;
            std::cout << "counter inside lambda:" << obj->counter << std::endl;
        };

        lambda();
        std::cout << "counter" << counter << std::endl;
    }
    int counter = 0;
};

int main() {
    MyStruct obj;
    obj.Functions();
    obj.Functions();
    obj.Functions();
    obj.Functions();
    obj.Functions();

    return 0;
}
