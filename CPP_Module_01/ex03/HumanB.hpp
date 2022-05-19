# ifndef HUMAN_B
# define HUMAN_B

# include <iostream>
# include <string.h>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string     name;
        Weapon*          weapon;
	public:
		HumanB(std::string name);
		~HumanB();
		void attack();
        void setWeapon(Weapon& weaponB);
};

# endif