#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat
{
public:

	Bureaucrat( const std::string &name, int grade );
	Bureaucrat( const Bureaucrat &src );
	~Bureaucrat( void );

	Bureaucrat&	operator=( const Bureaucrat& src );

	const std::string&	getName( void ) const;
	int					getGrade( void ) const;

	void				incrementGrade( void );
	void				decrementGrade( void );

	void				signForm( Form& form ) const ;

private:

	Bureaucrat( void );

	static const int	lowestGrade = 150;
	static const int	highestGrade = 1;

	const std::string	name;
	int					grade;
	
	
	void	checkGrade( void ) const ;


public:

	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw()
		{
			return ("Invalid grade (too high).");
		}
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw()
		{
			return ("Invalid grade (too low).");
		}
	};
};

#endif