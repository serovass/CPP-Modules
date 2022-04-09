#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__
# include <string>

class	Zombie
{
public:

	Zombie( std::string name );
	Zombie();
	~Zombie( void );

	void setName( std::string name );
	std::string	getName( void );
	void announce( void );

private:
	std::string name;
	
};

Zombie* zombieHorde( int N, std::string name );

#endif
