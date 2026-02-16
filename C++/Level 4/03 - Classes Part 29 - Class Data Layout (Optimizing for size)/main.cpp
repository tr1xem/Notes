#include <iostream>
#include <string>

struct GameState {

    float score;
    bool checkpoint;
    short numberOfPlayers;
};

int main() {

    GameState gs;
    std::cout << sizeof(gs.checkpoint) << std::endl;
    std::cout << sizeof(gs.score) << std::endl;
    std::cout << sizeof(gs.numberOfPlayers) << std::endl;
    std::cout << sizeof(gs) << std::endl;

    return 0;
}
