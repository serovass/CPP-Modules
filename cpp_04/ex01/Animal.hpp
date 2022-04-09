#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{

public:

	Animal( void );
	Animal( const Animal& source );
	virtual ~Animal( void );

	Animal  &operator=( const Animal& source );

	const std::string&  getType( void ) const ;
	virtual void        makeSound( void ) const;
	
protected:

	std::string	type;

};

#endif
