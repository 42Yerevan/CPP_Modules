# include "Zombie.hpp"

Zombie::Zombie()
{
	return ;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	return ;
}

Zombie::~Zombie()
{
	std::cout << this->name << " has been destructed" << std::endl;
	return ;
}
void    Zombie::setname(std::string name)
{
    this->name = name;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}