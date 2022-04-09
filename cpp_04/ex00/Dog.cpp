#include "Dog.hpp"

Dog::Dog( void )
{
	this->type = "Dog";
	std::cout << "Default constructor for Dog called" << std::endl;

	return;
}

Dog::Dog( Dog const & source )
{
	std::cout << "Copy constructor for Dog called" << std::endl;
	*this = source;
    
	return;
}

Dog::~Dog( void )
{
	std::cout << "Destructor for Dog called" << std::endl;
	
	return;
}

Dog&	Dog::operator=(Dog const &source)
{
	this->type = source.getType();
	return *this;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Wouf" << std::endl;
}
