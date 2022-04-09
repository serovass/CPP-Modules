#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP


# include <iostream>
# include "Form.hpp"
# include "Bureaucrat.hpp"


class ShrubberyCreationForm : public Form
{
public:

	ShrubberyCreationForm( const std::string &target );
	ShrubberyCreationForm( const ShrubberyCreationForm &src );
	~ShrubberyCreationForm( void );


	ShrubberyCreationForm	&operator=( const ShrubberyCreationForm &src );

	const std::string	&getTarget( void ) const;
	virtual void		execute( const Bureaucrat &executor ) const;


private:

	ShrubberyCreationForm( void );
	
	const std::string		target;
	
};

#endif