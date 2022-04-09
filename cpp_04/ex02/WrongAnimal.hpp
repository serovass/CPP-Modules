#ifndef WRONGWrongAnimal_HPP
# define WRONGWrongAnimal_HPP

# include <iostream>

class WrongAnimal
{

public:

public:

	WrongAnimal( void );
	WrongAnimal( const WrongAnimal& source );
	virtual ~WrongAnimal( void );

	WrongAnimal  &operator=( const WrongAnimal& source );

	const std::string&  getType( void ) const ;
	void				makeSound( void ) const;
	
protected:

	std::string	type;

};

#endif
