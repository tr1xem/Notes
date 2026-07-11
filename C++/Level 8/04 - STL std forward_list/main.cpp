#include <forward_list>
#include <iostream>
#include <iterator>

void printList(const std::forward_list<int>& mylist) {
    std::cout << "============" << std::endl;
    for (const auto& ele : mylist) {
        std::cout << ele << ",";
    }
    std::cout << std::endl;
}
int main() {
    std::forward_list<int> mylist{1, 2, 3, 4, 5};
    printList(mylist);

    mylist.push_front(0);
    printList(mylist);

    // SEG Fault
    // mylist.insert_after(end(mylist), 10);
    auto pos = begin(mylist);
    // mylist.insert_after(pos, 10);
    printList(mylist);
    // We dont have a size getter func for forward_list
    int dist = std::distance(begin(mylist), end(mylist));

    std::advance(pos, dist - 1);
    mylist.insert_after(pos, 10);
    printList(mylist);

    std::forward_list<int> mylist2{-1, -2, -3, -4, -5};

    // After 1st element
    // mylist.splice_after(begin(mylist), mylist2);
    // Before first element
    mylist.splice_after(mylist.before_begin(), mylist2);
    printList(mylist);

    return 0;
}
