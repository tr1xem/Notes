#include <functional>
#include <iostream>
#include <utility>
#include <vector>

int main() {
    using student_t = std::pair<int, std::string>;
    student_t student(1, "Saumya");

    std::vector<student_t> students;

    std::cout << student.first << " -  " << student.second << std::endl;

    // Using ref would update the vlaue in the pair when teh value of var is
    // chagned it self
    long value = 100L;
    auto newpair = std::make_pair(std::ref(value), 10.0F);
    // auto newpair = std::make_pair(100L, 10.0F);

    value = 200L;

    std::cout << newpair.first << " -  " << newpair.second << std::endl;
    std::cout << std::get<0>(newpair) << std::endl;
    return 0;
}
