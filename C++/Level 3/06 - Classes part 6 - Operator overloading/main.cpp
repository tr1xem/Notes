#include <iostream>

class Vector3f {
  public:
    float x, y, z;
    Vector3f() {
        x = 0.0f;
        y = 0.0f;
        z = 0.0f;
    }
    Vector3f operator+(const Vector3f rhs) const {
        Vector3f result;
        result.x = x + rhs.x;
        result.y = y + rhs.y;
        result.z = z + rhs.z;
        return result;
    }
    Vector3f operator++() {
        x++;
        y++;
        z++;
        return *this;
    }
    bool operator==(const Vector3f &rhs) const {

        if (x == rhs.x && y == rhs.y && z == rhs.z) {
            return true;
        }
        return false;
    }
};

std::ostream &operator<<(std::ostream &os, const Vector3f &obj) {
    os << obj.x << " " << obj.y << " " << obj.z;
    return os;
}
bool operator==(const Vector3f &lhs, const Vector3f &rhs) {

    if (lhs.x == rhs.x && lhs.y == rhs.y && lhs.z == rhs.z) {
        return true;
    }
    return false;
}

int main() {

    Vector3f myVector;
    myVector.x = 1.0f;
    myVector.y = 2.0f;
    myVector.z = 3.0f;

    ++myVector;
    std::cout << "VECTOR" << myVector << std::endl;

    Vector3f myVector2;
    myVector2.x = 4.0f;
    myVector2.y = 5.0f;
    myVector2.z = 6.0f;

    myVector = myVector + myVector2;
    std::cout << "VECTOR" << myVector << std::endl;

    return 0;
}
