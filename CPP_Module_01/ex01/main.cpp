# include "Zombie.hpp"

int main(void)
{
    int N;

    N = 15;
    Zombie* zombies = zombieHorde(N, "Valod");
    for (int i = 0; i < N; i++)
        zombies[i].announce();
    delete[] zombies;
    return (0);
}