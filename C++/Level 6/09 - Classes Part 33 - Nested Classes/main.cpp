#include <iostream>
#include <vector>

class ParticleSystem {
    struct Particle {
        float x{}, y{}, z{}, speed{1.0f}, lifetime{50.0f};
        void Move() {};
    };

   public:
    void Simulation() {
        for (size_t i = 0; i < m_particles.size(); i++) {
            m_particles[i].Move();
        }
    };

   private:
    std::vector<Particle> m_particles;
};
int main() {
    ParticleSystem p;
    p.Simulation();
    return 0;
}
