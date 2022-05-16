# include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* zombie_arr = new Zombie[N];

    for (int i = 0; i < N; i++)
        zombie_arr[i].setname(name + std::to_string(i));
    return (zombie_arr);
}