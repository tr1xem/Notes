#include <iostream>

union MyUnion {
    int i;
    float f;
    short s;
};

int main() {
    MyUnion u;
    u.i = 5;
    return 0;
}
