#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( const std::string &target ):
	Form("ShrubberyCreationForm", 145, 137), target(target)
{
	// std::cout << "Standard constructor for ShrubberyCreationForm called" << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm( void ):
	Form("ShrubberyCreationForm", 145, 137), target("")
{
	// std::cout << "Default constructor for ShrubberyCreationForm called" << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ):
	Form("ShrubberyCreationForm", 145, 137), target(src.getTarget())
{
	std::cout << "Copy constructor for ShrubberyCreationForm called" << std::endl;

	*this = src;

	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	// std::cout << "Destructor for ShrubberyCreationForm called" << std::endl;
	return;
}

//-------------------------------------------------------------------
ShrubberyCreationForm &	ShrubberyCreationForm::operator=( ShrubberyCreationForm const & src )
{
	(void)src;
	// std::cout << "Assignement operator for ShrubberyCreationForm called" << std::endl;

	return *this;
}

//---------------------------------------------------------------------
const std::string	&ShrubberyCreationForm::getTarget( void ) const
{
	return this->target;
}

//------------------------- execute ------------------------------------
void	ShrubberyCreationForm::execute( const Bureaucrat &executor ) const
{
	if (this->getIsSigned() == true)
	{
		if (executor.getGrade() <= this->getExecuteGrade())
		{
			std::ofstream	outFile;
			std::string		outFileName = this->getTarget() + "_shrubbery";

			outFile.open(outFileName);
			if (!outFile)
				return ;

			outFile << "███▀▀▀██████" << std::endl;
			outFile << "█▀▄██▄▄▀▄▄▀█" << std::endl;
			outFile << "███▀▀▄▄█▀▀██" << std::endl;
			outFile << "█▀▄████▐█▄▀█" << std::endl;
			outFile << "██████▌█████" << std::endl;
			outFile << "██████─█████" << std::endl;
			outFile << "█████▌─█████" << std::endl;
			outFile << "█████─▐█████" << std::endl;
			outFile << "█████─▐█████" << std::endl;
			outFile.close();
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
