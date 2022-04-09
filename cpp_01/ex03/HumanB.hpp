#include "Weapon.hpp"

class HumanB
{

public:
	HumanB( std::string name );
	~HumanB( void );

	void	attack( void );
	void	setWeapon(Weapon &newWeapon);

private:

	std::string	name;
	Weapon		*weapon;

};