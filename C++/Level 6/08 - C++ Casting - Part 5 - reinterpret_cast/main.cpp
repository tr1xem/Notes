#include <cstring>
#include <iostream>
struct GameState {
    int level;
    int health;
    int points;
    bool GameComplete;
    bool BossDefeated;
};

// NOTE: Here we are trying to read/write to have data in one go
int main(int argc, char* argv[]) {
    // Load some game State
    GameState gs = {66, 100, 69, false, false};

    // Allocate some memory
    char bagofBytes[sizeof(GameState)];

    // Copy the data from the GameState to the bagofBytes
    std::memcpy(bagofBytes, &gs, sizeof(GameState));

    // std::cout << *(int*)(bagofBytes) << std::endl;

    // Time to read it
    std::cout << *reinterpret_cast<int*>(bagofBytes) << std::endl;
    std::cout << *reinterpret_cast<int*>(bagofBytes + 4) << std::endl;
    std::cout << *reinterpret_cast<int*>(bagofBytes + 8) << std::endl;
    std::cout << *reinterpret_cast<bool*>(bagofBytes + 12) << std::endl;
    std::cout << *reinterpret_cast<bool*>(bagofBytes + 13) << std::endl;

    // OR BETTER
    //
    GameState* gs2 = reinterpret_cast<GameState*>(bagofBytes);
    std::cout << gs2->level << std::endl;
    std::cout << gs2->health << std::endl;
    std::cout << gs2->points << std::endl;
    std::cout << gs2->GameComplete << std::endl;
    std::cout << gs2->BossDefeated << std::endl;
    return 0;
}
