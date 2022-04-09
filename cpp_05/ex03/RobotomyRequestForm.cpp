#include <cstdlib>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( const std::string &target ):
	Form("RobotomyRequestForm", 72, 45), target(target)
{
	// std::cout << "Standard constructor for RobotomyRequestForm called" << std::endl;
	return;
}

RobotomyRequestForm::RobotomyRequestForm( void ):
	Form("RobotomyRequestForm", 72, 45), target("")
{
	// std::cout << "Default constructor for RobotomyRequestForm called" << std::endl;
	return;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ):
	Form("RobotomyRequestForm", 72, 45), target(src.getTarget())
{
	std::cout << "Copy constructor for RobotomyRequestForm called" << std::endl;

	*this = src;

	return;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	// std::cout << "Destructor for RobotomyRequestForm called" << std::endl;
	return;
}

//-------------------------------------------------------------------
RobotomyRequestForm &	RobotomyRequestForm::operator=( RobotomyRequestForm const & src )
{
	(void)src;
	// std::cout << "Assignement operator for RobotomyRequestForm called" << std::endl;

	return *this;
}

//---------------------------------------------------------------------
const std::string	&RobotomyRequestForm::getTarget( void ) const
{
	return this->target;
}

//------------------------- execute ------------------------------------
void	RobotomyRequestForm::execute( const Bureaucrat &executor ) const
{
	if (this->getIsSigned() == true)
	{
		if (executor.getGrade() <= this->getExecuteGrade())
		{
			std::cout << "Bzzzzzzzzzzzz..." << std::endl;

			if (std::rand() % 2)
				std::cout << this->target << " has been successfully robotomized." << std::endl;
			else
				std::cout << "The robotomy of " << this->target << " failed." << std::endl;
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