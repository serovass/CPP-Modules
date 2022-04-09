#include "ClapTrap.hpp"

//-----------------Constructor Destructor---------------------
ClapTrap::ClapTrap( void )
{
	std::cout << "Constructor for ClapTrap called" << std::endl;

	this->hitPoints = 10;
	this->initHitPoints = this->hitPoints;
	this->energyPoints = 10;
	this->attackDamage = 10;

	return;
}

ClapTrap::ClapTrap( ClapTrap const &source )
{
	std::cout << "Copy constructor for ClapTrap called" << std::endl;

	*this = source;

	return;
}

ClapTrap::ClapTrap( const std::string name )
{
	std::cout << "Constructor for ClapTrap called" << std::endl;

	this->name = name;
	this->hitPoints = 10;
	this->initHitPoints = this->hitPoints;
	this->energyPoints = 10;
	this->attackDamage = 10;

	return;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "Destructor for ClapTrap called" << std::endl;

	return;
}

//----------------- get set --------------

	std::string ClapTrap::getName(void) const
	{
		return this->name;
	}

	void		ClapTrap::setName(std::string name)
	{
		this->name = name;

		return;
	}

	unsigned int	ClapTrap::getHitPoints(void) const
	{
		return this->hitPoints;
	}

	unsigned int	ClapTrap::getEnergyPoints(void) const
	{
		return this->energyPoints;
	}

	unsigned int	ClapTrap::getInitHitPoints(void) const
	{
		return this->initHitPoints;
	}

	unsigned int	ClapTrap::getAttackDamage(void) const
	{
		return this->attackDamage;
	}

//----------------- = -----------------

ClapTrap	&ClapTrap::operator=( const ClapTrap& source )
{
	std::cout << "Assignement operator for ClapTrap called" << std::endl;
	
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
void		ClapTrap::attack( const std::string& target )
{
	std::cout << "attack: "<< std::endl;
	if (this->energyPoints < 1)
	{
		std::cout << "ClapTrap " << this->name 
			<< " has no energy points to attack " << std::endl;
		std::cout << std::endl;

		return ;
	}
	else if (this->hitPoints < 1)
	{
		std::cout << "ClapTrap " << this->name 
			<< " is allmost dead and can't do anything" << std::endl;
		std::cout << std::endl;

		return ;
	}
	this->energyPoints--;
	std::cout << "ClapTrap " << this->name << " attacks " << target
		<< " causing " << this->attackDamage << " points of damage."
		<< std::endl;
	std::cout << std::endl;
}

//-----------------takeDamage--------------------
void	ClapTrap::takeDamage( unsigned int amount )
{
	std::cout << "takeDamage: "<< std::endl;
	if (this->hitPoints < 1)
	{
		std::cout << "ClapTrap " << this->name 
			<< " is already allmost dead." << std::endl;
		std::cout << std::endl;

		return ;
	}
	if (this->hitPoints <= amount)
	{
		this->hitPoints = 0;
		std::cout << "ClapTrap " << this->name << " took " 
			<< amount << " damage and is allmost dead." 
			<< std::endl;
	}
	else
	{
		this->hitPoints -= amount;
		std::cout << "ClapTrap " << this->name << " took " 
			<< amount << " damage and now has " 
			<< this->hitPoints << " hit points." 
			<< std::endl;
	}
	std::cout << std::endl;
}

//-----------------beRepaired--------------------
void	ClapTrap::beRepaired( unsigned int amount )
{
	std::cout << "beRepaired: "<< std::endl;
	if (this->energyPoints < 1)
	{
		std::cout << "ClapTrap " << this->name 
			<< " has no energy points to repaire " << std::endl;
		std::cout << std::endl;

		return ;
	}
	else if (this->hitPoints < 1)
	{
		std::cout << "ClapTrap " << this->name 
			<< " is allmost dead and can't do anything" << std::endl;
		std::cout << std::endl;

		return ;
	}
	this->energyPoints--;
	if (this->energyPoints + amount > this->initHitPoints)
	{
		std::cout << "Can't repaire more than " 
			<< ( this->initHitPoints - this->hitPoints ) 
			<< " hit points." << std::endl;

		this->hitPoints = this->initHitPoints;
	}
	else
	{
		this->hitPoints += amount;

		std::cout << "ClapTrap " << this->name << " has repaired "
			<< amount << " hit points." << std::endl;
	}
	
	std::cout << "ClapTrap " << this->name << " has " 
		<< this->hitPoints << " hit points and " << this->energyPoints 
		<< " energy points." << std::endl;
	std::cout << std::endl;
}
