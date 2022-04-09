#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"

class Dog : public AAnimal
{

public:

	Dog( void );
	Dog( const Dog &source );
	~Dog( void );

	Dog&	operator=(const Dog& source);

	virtual void	makeSound( void ) const;
	Brain&			getBrain(void) const;

private:

	Brain	*brain;

};

#endif