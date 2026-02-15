#include <iostream>

class superSecret {
  private:
    int passcode;
    friend class UDT;
};
class UDT {
  public:
    UDT() { m_secret.passcode = 191; }

  private:
    int m_private{191};
    superSecret m_secret;
    friend void printprivate(UDT &udt);
};

void printprivate(UDT &udt) { std::cout << udt.m_private << std::endl; }

int main() {

    UDT a;
    printprivate(a);

    return 0;
}
