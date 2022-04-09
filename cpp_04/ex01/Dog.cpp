#include "Dog.hpp"

Dog::Dog( void )
{
	std::cout << "Default constructor for Dog called" << std::endl;

	this->type = "Dog";
	this->brain = new Brain();
	
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
	if (this->brain)
		delete this->brain;

	return;
}

Dog&	Dog::operator=(Dog const &source)
{
	// delete this->brain;
	// this->brain = new Brain(*(source.brain));
	this->brain = source.brain;
	this->type = source.getType();
	return *this;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Wouf" << std::endl;
}

Brain &Dog::getBrain(void) const
{
	return *(this->brain);
}
