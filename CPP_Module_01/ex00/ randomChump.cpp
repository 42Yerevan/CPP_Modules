# include "Zombie.hpp"

void Zombie::randomChump( std::string name )
{
    Zombie* zombie = new Zombie();

    this->name = name;
    this->announce();
}