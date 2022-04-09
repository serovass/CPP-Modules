#include "Cat.hpp"


Cat::Cat( void )
{
	this->type = "Cat";
	std::cout << "Default constructor for Cat called" << std::endl;

	return;
}

Cat::Cat( Cat const & source )
{
	std::cout << "Copy constructor for Cat called" << std::endl;
	*this = source;

	return;
}

Cat::~Cat( void )
{
	std::cout << "Destructor for Cat called" << std::endl;

	return;
}

Cat&	Cat::operator=(Cat const &source)
{
	this->type = source.getType();
	
	return *this;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meow.." << std::endl;
}