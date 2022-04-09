#include "Cat.hpp"


Cat::Cat( void )
{
	std::cout << "Default constructor for Cat called" << std::endl;

	this->type = "Cat";
	this->brain = new Brain();

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
	if (this->brain)
		delete this->brain;

	return;
}

Cat&	Cat::operator=(Cat const &source)
{
	// delete this->brain;
	// this->brain = new Brain(*(source.brain));
	this->brain = source.brain;
	this->type = source.getType();
	
	return *this;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meow.." << std::endl;
}

Brain &Cat::getBrain(void) const
{
	return *(this->brain);
}