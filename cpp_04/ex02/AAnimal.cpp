#include "AAnimal.hpp"


AAnimal::AAnimal( void )
{
	std::cout << "Default constructor for AAnimal called" << std::endl;
	this->type = "AAnimal";

	return;
}

AAnimal::AAnimal( AAnimal const& source )
{
	std::cout << "Copy constructor for AAnimal called" << std::endl;
	*this = source;

	return;
}

AAnimal::~AAnimal( void )
{
	std::cout << "Destructor for AAnimal called" << std::endl;

	return;
}

AAnimal& AAnimal::operator=( AAnimal const & source )
{
	std::cout << "Assignement operator for AAnimal called" << std::endl;
	this->type = source.getType();
    
	return *this;
}

const std::string	&AAnimal::getType( void ) const
{
	return (this->type);
}

