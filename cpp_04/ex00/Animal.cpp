#include "Animal.hpp"


Animal::Animal( void )
{
	std::cout << "Default constructor for Animal called" << std::endl;
	this->type = "Animal";

	return;
}

Animal::Animal( Animal const& source )
{
	std::cout << "Copy constructor for Animal called" << std::endl;
	*this = source;

	return;
}

Animal::~Animal( void )
{
	std::cout << "Destructor for Animal called" << std::endl;

	return;
}

Animal& Animal::operator=( const Animal& source )
{
	std::cout << "Assignement operator for Animal called" << std::endl;
	this->type = source.getType();
    
	return *this;
}

const std::string	&Animal::getType( void ) const
{
	return (this->type);
}

//----------------makeSound----------------------

void	Animal::makeSound( void ) const
{
	std::cout << "The sound of Animal class." << std::endl;
}
