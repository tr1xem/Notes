#include <iostream>

class Collection {
  public:
    Collection() { data = new int[10]; }
    ~Collection() { delete[] data; }

    int &operator[](size_t idx) { return data[idx]; }
    const int &operator[](size_t idx) const { return data[idx]; }

  private:
    int *data;
};

int main() {

    Collection Collection;
    Collection[0] = 10;
    std::cout << Collection[0] << std::endl;
    return 0;
}
