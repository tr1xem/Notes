#include <iostream>

int main(int argc, char* argv[], char* env[]) {
    for (int i = 0; i < argc; i++) {
        std::cout << "[" << i << "] " << argv[i] << std::endl;
    }
    std::cout << "\n";
    std::cout << "Environment variables:" << *env << std::endl;
    return 0;
}
