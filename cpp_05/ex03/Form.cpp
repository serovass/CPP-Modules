#include "Form.hpp"

Form::Form( const std::string &name, int gradeToSign, int gradeToExecute ):
	name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	this->checkGrades();
	// std::cout << "Standard constructor for Form called" << std::endl;

	return;
}

Form::Form( void ): name(""), isSigned(false),
	gradeToSign(Form::lowestGrade), gradeToExecute(Form::lowestGrade)
{
    // std::cout << "Default constructor for Form called" << std::endl;

	return;
}

Form::Form( const Form & src ): 
    name(src.getName()), gradeToSign(src.getSignGrade()), gradeToExecute(src.getExecuteGrade())
{
	// std::cout << "Copy constructor for Form called" << std::endl;
	*this = src;

	return;
}

Form::~Form( void )
{
	// std::cout << "Destructor for Form called" << std::endl;

	return;
}

Form&   Form::operator=( const Form& src )
{
    // std::cout << "Assignement operator for Form called" << std::endl;
    if (this != &src)
        this->isSigned = src.isSigned;

	return *this;
}

//------------ get set -----------------------------
const std::string&  Form::getName( void ) const
{
	return this->name;
}

int	Form::getSignGrade( void ) const
{
	return this->gradeToSign;
}

int	Form::getExecuteGrade( void ) const
{
	return this->gradeToExecute;
}

bool	Form::getIsSigned( void ) const
{
	return this->isSigned;
}

//----------------------------------------

void	Form::checkGrades( void ) const
{
	if (this->gradeToExecute < Form::highestGrade
			|| this->gradeToSign < Form::highestGrade)
		throw Form::GradeTooHighException();
	if (this->gradeToExecute > Form::lowestGrade
			|| this->gradeToSign > Form::lowestGrade)
		throw Form::GradeTooLowException();
}

//---------------------beSigned--------------------------
bool	Form::beSigned( const Bureaucrat &bureaucrat )
{
	if (bureaucrat.getGrade() <= this->getSignGrade())
	{
		this->isSigned = true;
		return true;
	}
	else
		throw Form::GradeTooLowException();

	return false;    
}

//--------------------- execute --------------------------

void	Form::execute( Bureaucrat const & executor ) const
{
	if (executor.getGrade() <= this->getExecuteGrade())
		return ;
	else
		throw Form::GradeTooLowException();
}
