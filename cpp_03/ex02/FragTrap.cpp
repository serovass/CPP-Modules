#include "FragTrap.hpp"

//-----------------Constructor Destructor---------------------
FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "Constructor for FragTrap called" << std::endl;

	this->hitPoints = 100;
	this->initHitPoints = this->hitPoints;
	this->energyPoints = 100;
	this->attackDamage = 30;

	return;
}


FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Constructor for FragTrap called" << std::endl;

	this->hitPoints = 100;
	this->initHitPoints = this->hitPoints;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &source): ClapTrap(source)
{
	std::cout << "Copy constructor for FragTrap called" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor for FragTrap called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &source)
{
	std::cout << "Assignement operator for FragTrap called" << std::endl;
	
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

//-----------------highFivesGuys---------------------
void FragTrap::highFivesGuys(void)
{
	std::cout << "highFivesGuys: " << std::endl;
	std::cout << this->name << ": High fives guys!" << std::endl;

	std::cout << std::endl;
}
