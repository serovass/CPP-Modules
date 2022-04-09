#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main( void )
{
	FragTrap fragTrap( "Vlad" );
	FragTrap copuFragTrap( fragTrap );

	std::cout << "Name: " << copuFragTrap.getName() << std::endl;
	std::cout << "HitPoints: " << copuFragTrap.getHitPoints() << std::endl;
	std::cout << "EnergyPoints: " << copuFragTrap.getEnergyPoints() << std::endl;
	std::cout << "AttackDamage: " << copuFragTrap.getAttackDamage() << std::endl;
	std::cout << std::endl;

	copuFragTrap.highFivesGuys();

	return (0);
}
