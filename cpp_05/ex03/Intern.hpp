
#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
public:

	Intern( void );
	Intern( const Intern &src );
	~Intern( void );

	Intern	&operator=( const Intern &src );

	Form	*makeForm(const std::string &formName, const std::string &target) const;

};

#endif