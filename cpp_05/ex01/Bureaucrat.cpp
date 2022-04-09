#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ): name(""), grade(Bureaucrat::lowestGrade)
{
	std::cout << "Default constructor for Bureaucrat called" << std::endl;

	return;
}

Bureaucrat::Bureaucrat( const std::string &name, int grade ): name(name), 
	grade(grade)
{
	this->checkGrade();
	std::cout << "Standard constructor for Bureaucrat called" << std::endl;

	return;
}

Bureaucrat::Bureaucrat( const Bureaucrat& src )
{
	std::cout << "Copy constructor for Bureaucrat called" << std::endl;
	*this = src;

	return;
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << "Destructor for Bureaucrat called" << std::endl;

	return;
}

//-------------------------------------------
Bureaucrat&	Bureaucrat::operator=( const Bureaucrat& src )
{
	std::cout << "Assignement operator for Bureaucrat called" << std::endl;
	if (this != &src)
		this->grade = src.grade;

	return *this;
}

//--------------get set------------------------
const std::string	&Bureaucrat::getName( void ) const
{
	return this->name;
}

int	Bureaucrat::getGrade( void ) const
{
	return this->grade;
}

//--------------increment decrement----------------
void	Bureaucrat::incrementGrade( void )
{
	std::cout << "incrementGrade called" << std::endl;
	this->grade--;
	checkGrade();
}

void	Bureaucrat::decrementGrade( void )
{
	std::cout << "decrementGrade called" << std::endl;
	this->grade++;
	checkGrade();
}

void	Bureaucrat::checkGrade( void ) const
{
	if (this->grade < Bureaucrat::highestGrade )
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > Bureaucrat::lowestGrade)
		throw Bureaucrat::GradeTooLowException();
}

//--------------------sign----------------------

void	Bureaucrat::signForm( Form &form ) const
{
	try
	{
		form.beSigned(*this);
		std::cout << this->name << " signed " << form.getName() << "." << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->name << " couldn't sign " << form.getName() << " because: " 
			<< e.what() << std::endl;
	}
}
