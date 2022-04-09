#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap clapTrap("Mark");
	ClapTrap clapTrapNew(clapTrap);

	clapTrapNew.takeDamage(1);
	clapTrapNew.attack("Zombie");
	clapTrapNew.takeDamage(7);
	clapTrapNew.beRepaired(5);
	clapTrapNew.takeDamage(11);
	clapTrapNew.takeDamage(1);
	
	return (0);
}