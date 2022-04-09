#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main( void )
{
	ScavTrap scavTrap("Robert");
	ScavTrap copyScavTrap(scavTrap);

	copyScavTrap.attack("Zombie");
	copyScavTrap.attack("Zombie");
	copyScavTrap.guardGate();

	return (0);
}