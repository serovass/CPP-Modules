#include "ScavTrap.hpp"

//-----------------Constructor Destructor---------------------
ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "Constructor for ScavTrap called" << std::endl;

	this->hitPoints = 100;
	this->initHitPoints = this->hitPoints;
	this->energyPoints = 50;
	this->attackDamage = 20;

	return;
}


ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Constructor for ScavTrap called" << std::endl;

	this->hitPoints = 100;
	this->initHitPoints = this->hitPoints;
	this->energyPoints = 50;
	this->attackDamage = 20;

	return;
}

ScavTrap::ScavTrap(ScavTrap const &source): ClapTrap(source)
{
	std::cout << "Copy constructor for ScavTrap called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor for ScavTrap called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &source)
{
	std::cout << "Assignement operator for ScavTrap called" << std::endl;
	
	if (this != &source)
	{
		this->name = source.getName();
		this->hitPoints = source.getHitPoints();
		this->energyPoints = source.getEnergyPoints();
		this->initHitPoints = source.getInitHitPoints();
		this->attackDamage = source.getAttackDamage();
	}

	return *this;
}

//-----------------attack---------------------
void ScavTrap::attack(const std::string &target)
{
	std::cout << "attack: "<< std::endl;
	if (this->energyPoints < 1)
	{
		std::cout << "ScavTrap " << this->name 
			<< " has no energy points to attack " << std::endl;
		std::cout << std::endl;

		return ;
	}
	else if (this->hitPoints < 1)
	{
		std::cout << "ScavTrap " << this->name 
			<< " is allmost dead and can't do anything" << std::endl;
		std::cout << std::endl;

		return ;
	}
	this->energyPoints--;
	std::cout << "ScavTrap " << this->name << " attacks " << target
		<< " causing " << this->attackDamage << " points of damage."
		<< std::endl;
	std::cout << std::endl;
}

//-----------------guardGate---------------------
void ScavTrap::guardGate(void)
{
	std::cout << "guardGate: " << std::endl;
	std::cout << this->name << " is now in Gate keeper mode." << std::endl;

	std::cout << std::endl;
}