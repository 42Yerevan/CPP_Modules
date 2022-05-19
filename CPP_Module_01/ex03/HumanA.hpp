# ifndef HUMAN_A
# define HUMAN_A

# include <iostream>
# include <string.h>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string     name;
        Weapon&         weapon;
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		void    attack();
};

# endif