#include <iostream>
#include "HumanA.hpp"


HumanA::HumanA( std::string name, Weapon &weapon ): weapon(weapon)
{
	this->name = name;
}

HumanA::~HumanA( void )
{
}

void	HumanA::attack( void )
{
	std::cout << this->name ;
	std::cout << " attacks with their " ;
	std::cout << this->weapon.getType() << std::endl;
}
