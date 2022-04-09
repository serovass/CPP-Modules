#include <iostream>
#include "Zombie.hpp"

void	announceZombieHorde( int n, Zombie *zombieHorde )
{
	for (int i = 0; i < n; i++)
	{
		zombieHorde[i].announce();
	}
}

int	main( void )
{
	int n = 3;
	std::cout << "Welcome Zombie horde of "; 
	std::cout << n;
	std::cout << " Franks:" << std::endl;
	Zombie	*franks = zombieHorde(n, "Frank");

	announceZombieHorde(n, franks);
	delete [] franks;
}
