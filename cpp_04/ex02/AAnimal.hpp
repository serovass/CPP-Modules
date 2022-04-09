#ifndef AAnimal_HPP
# define AAnimal_HPP

# include <iostream>
# include "Brain.hpp"

class AAnimal
{

public:

	AAnimal( void );
	AAnimal( const AAnimal& source );
	virtual ~AAnimal( void );

	AAnimal  &operator=( const AAnimal& source );

	const std::string&  getType( void ) const ;
	virtual Brain&		getBrain(void) const = 0;
	virtual void        makeSound( void ) const = 0;
	
protected:

	std::string	type;

};

#endif
