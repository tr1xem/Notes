#include <iostream>
// class Vector3 {
//   public:
//     Vector3() {
//         x = 0.0f;
//         y = 0.0f;
//         z = 0.0f;
//     }
//     float x, y, z;
// };
// int main() {
//     Vector3 myobj;
//     myobj.x = 1.0f;
//     myobj.y = 2.0f;
//     myobj.z = 3.0f;
//
//     // Copy Constructor
//     // Vector3 myobj2 = myobj;
//     Vector3 myobj2;
//     myobj2 = myobj; // Copy assignment
//     std::cout << "myobj2.x = " << myobj2.x << " myobj2.y = " << myobj2.y
//               << " myobj2.z = " << myobj2.z << std::endl;
//     return 0;
// }
//
class array {
  public:
    array() {
        std::cout << "Constructor" << std::endl;
        data = new int[10];
        for (int i = 0; i < 10; i++) {
            data[i] = i * i;
        }
    }

    ~array() { delete[] data; }

    // Copy Constructor
    array(const array &rhs) {
        std::cout << "Copy Constructor" << std::endl;
        // delete[] data;
        data = new int[10];
        for (int i = 0; i < 10; i++) {
            data[i] = rhs.data[i];
        }
    }
    // Copy Assignment Operator
    // Obj is already constructed we are just making a copy later
    array &operator=(const array &rhs) {
        std::cout << "Copy Assignment Operator" << std::endl;
        if (&rhs == this) {
            return *this;
        }
        if (data != nullptr) {
            delete[] data;
        }
        data = new int[10];
        for (int i = 0; i < 10; i++) {
            data[i] = rhs.data[i];
        }
        return *this;
    }

    void PrintingData() {
        for (int i = 0; i < 10; i++) {
            std::cout << data[i] << std::endl;
        }
    }

    void SetData(int index, int value) { data[index] = value; }

  private:
    int *data;
};
int main() {
    array myarray;

    myarray.SetData(0, 100000);
    myarray.SetData(1, 99);
    myarray.SetData(2, 69696969);

    // Copy Constructor
    // array myarray2 = myarray;

    array myarray2;
    myarray2 = myarray; // Copy Assignment Operator
    myarray.PrintingData();
    myarray2.PrintingData();
}
