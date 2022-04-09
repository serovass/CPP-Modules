#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		std::cout << std::endl;
		Form	form("f_01", 1, 150);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << std::endl;
		Form	form("f_02", 150, 1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << std::endl;
		Form	form("f_03", 0, 150);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << std::endl;
		Form	form("f_04", 150, 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << std::endl;
		Form	form("f_05", 151, 1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << std::endl;
		Form	form("f_06", 1, 151);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << std::endl;
		Form	form("f_07", 10, 10);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	//-------------------------------------------------------

	try
	{
		std::cout << std::endl;
		Bureaucrat	tom = Bureaucrat("Tom", 1);
		Form		form("f_10", 10, 5);

		tom.signForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << std::endl;
		Bureaucrat	lisa = Bureaucrat("Lisa", 10);
		Form		form("f_20", 1, 1);

		lisa.signForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}