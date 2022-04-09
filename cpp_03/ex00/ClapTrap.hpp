#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>


class ClapTrap
{

public:

	ClapTrap( void );
	ClapTrap( const std::string name );
	ClapTrap( const ClapTrap &source );
	~ClapTrap( void );

	ClapTrap&		operator=( const ClapTrap& source );

	void			attack( const std::string& target );
	void			takeDamage( unsigned int amount );
	void			beRepaired( unsigned int amount );

	void			setName(std::string name);
	std::string		getName(void) const;
	unsigned int	getHitPoints(void) const;
	unsigned int	getInitHitPoints(void) const;
	unsigned int	getEnergyPoints(void) const;
	unsigned int	getAttackDamage(void) const;

private:

	std::string		name;
	unsigned int	hitPoints;
	unsigned int	initHitPoints;
	unsigned int	energyPoints;
	unsigned int	attackDamage;

};

#endif