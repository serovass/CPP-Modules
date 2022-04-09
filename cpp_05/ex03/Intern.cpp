#include "Intern.hpp"

Intern::Intern( void )
{
	// std::cout << "Default constructor for Intern called" << std::endl;

	return;
}

Intern::Intern( Intern const & src )
{
	// std::cout << "Copy constructor for Intern called" << std::endl;
	*this = src;

	return;
}

Intern::~Intern( void )
{
	// std::cout << "Destructor for Intern called" << std::endl;

	return;
}

Intern &	Intern::operator=( Intern const & src )
{
	(void)src;
	// std::cout << "Assignement operator for Intern called" << std::endl;

	return *this;
}

//--------------------------- makeForm -------------------------------------------

Form    *Intern::makeForm(const std::string &formName, const std::string &target) const
{
	Form *newForm = nullptr;

	std::string formRequest[3] = {
		"ShrubberyCreationForm", 
		"RobotomyRequestForm", 
		"PresidentialPardonForm"};

	for (int i = 0; i < 3; ++i)
	{
		if (formName == formRequest[i])
		{
			if (i == 0)
				newForm = new ShrubberyCreationForm(target);
			else if (i == 1)
				newForm = new RobotomyRequestForm(target);
			else if (i == 2)
				newForm = new PresidentialPardonForm(target);
			break;
		}
	}
	if (!newForm)
		std::cerr << "The form " << formName << " can't be created." << std::endl;
	else
		std::cout << "Intern creates " << formName << "." << std::endl;

	return newForm;
}
