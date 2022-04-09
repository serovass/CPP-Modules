#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie( void )
{
}

Zombie::Zombie( std::string name)
{
	this->name = name;
}

Zombie::~Zombie( void )
{
	std::cout << Zombie::getName() << std::endl;
}

void Zombie::setName( std::string name )
{
	this->name = name;
}

std::string	Zombie::getName( void )
{
	return (this->name);
}

void	Zombie::announce( void )
{
	std::cout << Zombie::getName() << ":";
	std::cout << " Braaaaaiiiiiiinnnnssss......." << std::endl;
}
