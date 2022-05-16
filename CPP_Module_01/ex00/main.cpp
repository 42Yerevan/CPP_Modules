# include "Zombie.hpp"

int     main()
{
    Zombie* zombie = newZombie("Valod");

    zombie->announce();
    randomChump("Vasil");

    delete zombie;
    return (0);
}