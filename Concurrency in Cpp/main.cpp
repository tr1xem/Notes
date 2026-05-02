#include <iostream>
#include <thread>
#include <vector>

static int shared_value = 0;
void shared_incement() { shared_value = shared_value + 1; }

int main(int argc, char* argv[]) {
    std::vector<std::thread> threads;
    for (int i = 0; i < 100; i++) {
        threads.push_back(std::thread(shared_incement));
    }
    for (int i = 0; i < 100; i++) {
        threads[i].join();
    }
    std::cout << "SV" << shared_value << std::endl;
    return 0;
}
