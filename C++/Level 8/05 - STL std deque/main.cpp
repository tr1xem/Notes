#include <algorithm>
#include <cstdio>
#include <deque>
#include <iostream>
#include <iterator>
#include <string>

void print(std::deque<int> const& deque) {
    std::cout << "====================" << std::endl;
    std::for_each(begin(deque), end(deque),
                  [](int const& i) { std::puts(std::to_string(i).c_str()); });
    std::cout << std::endl;
}

int main() {
    std::deque<int> deque{1, 2, 3, 4, 5};

    print(deque);

    std::deque<int>::iterator it = deque.begin();
    it++;
    it++;

    deque.insert(it, 4);
    print(deque);

    auto end = deque.end();
    auto dist = std::distance(it, end);
    std::advance(it, dist);

    deque.insert(it, 100);
    print(deque);
    return 0;
}
