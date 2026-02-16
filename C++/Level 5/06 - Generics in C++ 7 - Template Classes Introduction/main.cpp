#include <iostream>

template <typename T, int size> class Container {
  public:
    Container() { data = new int[size]; }
    ~Container() { delete[] data; }
    static T m_variable;

  private:
    T *data;
};

// Static member variable, telling the compiler
// 'hey we exist'
template <typename T, int Size> T Container<T, Size>::m_variable;

int main() {

    Container<int, 8> c;

    return 0;
}
