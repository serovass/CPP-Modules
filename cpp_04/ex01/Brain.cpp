#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Default constructor for Brain called" << std::endl;

	return;
}

Brain::Brain( const Brain& source )
{
	std::cout << "Copy constructor for Brain called" << std::endl;
	*this = source;

	return;
}

Brain::~Brain( void )
{
	std::cout << "Destructor for Brain called" << std::endl;

	return;
}

//-------------------------------------
void Brain::setIdea(int index, std::string idea)
{
	if (index > 100 || index < 0)
		std::cout << "Invalid idea index." << std::endl;
	ideas[index] = idea;
}

std::string Brain::getIdea(int index)
{
	if (index > 100 || index < 0)
		std::cout << "Invalid idea index.\n";
	return ideas[index];
}

//-------------------------------------
Brain   &Brain::operator=( const Brain& source )
{
	std::cout << "Assignement operator for Brain called" << std::endl;
	for (int i = 0; i < this->ideasNum; i++)
		this->ideas[i] = source.ideas[i];

	return *this;
}
