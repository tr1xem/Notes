#include "array.hpp"
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
