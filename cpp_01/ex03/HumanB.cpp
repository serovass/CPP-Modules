#include <iostream>
#include "HumanB.hpp"


HumanB::HumanB( std::string name ): weapon(nullptr)
{
	this->name = name;
}

HumanB::~HumanB()
{
}

void	HumanB::attack( void )
{
	std::cout << this->name ;
	std::cout << " attacks with their " ;
	std::cout << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &newWeapon)
{
	this->weapon = &newWeapon;

}
