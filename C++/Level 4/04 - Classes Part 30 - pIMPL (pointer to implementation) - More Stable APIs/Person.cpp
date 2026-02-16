#include "Person.hpp"
struct Person::pImplPerson {
    std::string m_name;
    std::string m_strength;
    std::string m_speed;
};

Person::Person(std::string s) {
    m_Impl = std::make_unique<pImplPerson>();
    m_Impl->m_strength = "n/a";
    m_Impl->m_name = s;
    m_Impl->m_speed = "n/a";
};

Person::~Person() {};

std::string Person::GetAttributes() {
    return m_Impl->m_name + ", " + m_Impl->m_strength + ", " + m_Impl->m_speed;
}
