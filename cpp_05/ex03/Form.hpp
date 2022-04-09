#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
	Form( const std::string& name, int gradeToSign, int gradeToExecute );
	Form( const Form& src );
	virtual ~Form( void ) = 0;

	Form	&operator=( const Form& src );

	const std::string   &getName( void ) const;
	int					getSignGrade( void ) const;
	int					getExecuteGrade( void ) const;

	bool				getIsSigned( void ) const;

	void                checkGrades( void ) const ;
	bool                beSigned( const Bureaucrat &bureaucrat );

	virtual void		execute( Bureaucrat const & executor ) const = 0;


private:

	Form( void );

	const std::string   name;
	bool				isSigned;
	const int			gradeToSign;
	const int			gradeToExecute;
	static const int	lowestGrade = 150;
	static const int	highestGrade = 1;


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

	class FormNotSignedException : public std::exception
	{
		virtual const char* what() const throw()
		{
			return ("The form isn't signed.");
		}
	};

};

#endif
