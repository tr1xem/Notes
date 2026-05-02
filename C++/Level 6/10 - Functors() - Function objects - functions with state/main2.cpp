#include <algorithm>
#include <iostream>
#include <vector>

struct Goblin {
    int m_health{};
    int m_strength{};
    Goblin(int health, int strength) : m_health(health), m_strength(strength) {}
    // NOTE: what if i want to sort by strength?
    //  bool operator<(const Goblin& rhs) const { return m_health <
    //  rhs.m_health; }
};

struct GoblinComparator {
    bool operator()(const Goblin& lhs, const Goblin& rhs) const {
        return lhs.m_strength < rhs.m_strength;
    }
};
int main() {
    std::vector<Goblin> goblins{Goblin(500, 69), Goblin(300, 30),
                                Goblin(300, 19)};
    std::sort(begin(goblins), end(goblins), GoblinComparator());

    for (auto& goblin : goblins) {
        std::cout << goblin.m_health << std::endl;
    }

    return 0;
}
