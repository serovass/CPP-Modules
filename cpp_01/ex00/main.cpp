#include <iostream>
#include "Zombie.hpp"

int	main( void )
{
	std::cout << "First Zombie, Frank:" << std::endl;
	Zombie	frank("Frank");
	frank.announce();
	
	std::cout << "Second Zombie, Lisa:" << std::endl;
	Zombie	*lisa = newZombie("Lisa");
	lisa->announce();

	std::cout << "Third Zombie, Mark:" << std::endl;
	randomChump("Mark");

	delete lisa;
}
