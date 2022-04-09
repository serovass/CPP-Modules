#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	std::cout << std::endl;
	try
	{	
		Bureaucrat	tom = Bureaucrat("Tom", 1);
		ShrubberyCreationForm formTree = ShrubberyCreationForm("tree");
		RobotomyRequestForm formRobot = RobotomyRequestForm("Robo");
		PresidentialPardonForm formPardon = PresidentialPardonForm("Vassal");

		tom.signForm(formTree);
		tom.executeForm(formTree);
		std::cout << std::endl;

		tom.signForm(formRobot);
		tom.executeForm(formRobot);
		std::cout << std::endl;

		tom.signForm(formPardon);
		tom.executeForm(formPardon);
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
//--------------------
	std::cout << std::endl;
	try
	{	
		Bureaucrat	rick = Bureaucrat("Rick", 1);
		ShrubberyCreationForm formTree = ShrubberyCreationForm("secTree");

		rick.executeForm(formTree);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
//--------------------
	std::cout << std::endl;
	try
	{	
		Bureaucrat	mark = Bureaucrat("Mark", 140);
		ShrubberyCreationForm formTree = ShrubberyCreationForm("thirdTree");

		mark.signForm(formTree);
		mark.executeForm(formTree);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	//--------------------
	std::cout << std::endl;
	try
	{	
		Bureaucrat	mark = Bureaucrat("Tim", 150);
		ShrubberyCreationForm formTree = ShrubberyCreationForm("vvvvv");
		
		mark.signForm(formTree);
		mark.executeForm(formTree);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}