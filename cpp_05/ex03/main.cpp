#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main( void )
{
	Intern someRandomIntern;
	Form* ppf;
	Form* scf;
	Form* rrf;
	Form* enf;

	std::cerr << std::endl;
	ppf = someRandomIntern.makeForm("PresidentialPardonForm", "Bender");
	PresidentialPardonForm* ppform = (PresidentialPardonForm *)ppf;
	std::cerr << "PresidentialPardonForm target: " << ppform->getTarget() << " ." << std::endl;
	std::cerr << std::endl;

	scf = someRandomIntern.makeForm("ShrubberyCreationForm", "tree");
	std::cerr << std::endl;

	rrf = someRandomIntern.makeForm("RobotomyRequestForm", "rob");
	std::cerr << std::endl;

	enf = someRandomIntern.makeForm("ErrorNameForm", "Error");
	std::cerr << std::endl;

	delete ppf;
	delete scf;
	delete rrf;
	delete enf;

	return 0;
}
