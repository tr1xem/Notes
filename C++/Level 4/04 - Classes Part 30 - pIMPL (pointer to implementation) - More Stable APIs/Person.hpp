#ifndef PERSON_HPP
#define PERSON_HPP

#include <memory>
#include <string>

class Person {
  public:
    Person(std::string s);
    ~Person();
    std::string GetAttributes();

  private:
    // NOTE: pIMP
    struct pImplPerson;
    std::unique_ptr<pImplPerson> m_Impl;
    // pImplPerson *m_Impl;
};

#endif
