#include <iostream>

// Setting default values for template parameters
template <typename T = int, int size = 10> class Container {
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

    Container<int> c1;
    Container<int, 7> c2;

    return 0;
}
