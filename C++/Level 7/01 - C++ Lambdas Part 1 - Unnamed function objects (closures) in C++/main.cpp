#include <algorithm>
#include <iostream>
#include <vector>

// NOTE: Structure =
//[ captures ] (params) {body }
//

struct print_functor {
    int lastresult{-1};
    void operator()(int n) { std::cout << n << std::endl; }
};
int main() {
    std::vector<int> v{1, 2, 3, 4, 5};

    // Regular function
    // for (auto i : v) {
    //     std::cout << i << std::endl;
    // }

    // Lambda function
    // std::for_each(v.begin(), v.end(),
    //               [](int n) { std::cout << n << std::endl; });

    // Same as
    int lastresult{-1};
    auto print_v = [&lastresult](int n) {
        lastresult = n;
        std::cout << n << std::endl;
    };
    std::for_each(v.begin(), v.end(), print_v);
    std::cout << "lastresult = " << lastresult << std::endl;
    // Using functor
    // std::for_each(v.begin(), v.end(), print_functor());
    return 0;
}
