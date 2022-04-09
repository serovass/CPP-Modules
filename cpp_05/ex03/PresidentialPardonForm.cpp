#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( const std::string &target ):
	Form("PresidentialPardonForm", 25, 5), target(target)
{
	// std::cout << "Standard constructor for PresidentialPardonForm called" << std::endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm( void ):
	Form("PresidentialPardonForm", 25, 5), target("")
{
	// std::cout << "Default constructor for PresidentialPardonForm called" << std::endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ):
	Form("PresidentialPardonForm", 25, 5), target(src.getTarget())
{
	std::cout << "Copy constructor for PresidentialPardonForm called" << std::endl;

	*this = src;

	return;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	// std::cout << "Destructor for PresidentialPardonForm called" << std::endl;
	return;
}

//-------------------------------------------------------------------
PresidentialPardonForm &	PresidentialPardonForm::operator=( PresidentialPardonForm const & src )
{
	(void)src;
	// std::cout << "Assignement operator for PresidentialPardonForm called" << std::endl;

	return *this;
}

//---------------------------------------------------------------------
const std::string	&PresidentialPardonForm::getTarget( void ) const
{
	return this->target;
}

//------------------------- execute ------------------------------------
void	PresidentialPardonForm::execute( const Bureaucrat &executor ) const
{
	if (this->getIsSigned() == true)
	{
		if (executor.getGrade() <= this->getExecuteGrade())
		{
			std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
		}
		else
		{
			throw Form::GradeTooLowException();
		}
	}
	else
	{
		throw Form::FormNotSignedException();
	}
}