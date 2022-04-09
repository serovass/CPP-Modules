#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal( void )
{
	std::cout << "Default constructor for WrongAnimal called" << std::endl;
	this->type = "WrongAnimal";

	return;
}

WrongAnimal::WrongAnimal( WrongAnimal const& source )
{
	std::cout << "Copy constructor for WrongAnimal called" << std::endl;
	*this = source;

	return;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "Destructor for WrongAnimal called" << std::endl;

	return;
}

WrongAnimal& WrongAnimal::operator=( WrongAnimal const & source )
{
	std::cout << "Assignement operator for WrongAnimal called" << std::endl;
	this->type = source.getType();
    
	return *this;
}

const std::string	&WrongAnimal::getType( void ) const
{
	return (this->type);
}

//----------------makeSound----------------------

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "The sound of WrongAnimal class." << std::endl;
}