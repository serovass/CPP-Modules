#include <iostream>
#include "Array.hpp"


int	main( void )
{
	Array<int>			arrI(10);
	Array<int>			arrIEmpty;
	Array<std::string>	arrS(15);
	Array<std::string>	arrSEmpty;

	std::cout << "arrI.size() = " << arrI.size() << std::endl;
	std::cout << "arrIEmpty.size() = " << arrIEmpty.size() << std::endl;
	std::cout << "arrS.size() = " << arrS.size() << std::endl;
	std::cout << "arrSEmpty.size() = " << arrSEmpty.size() << std::endl;

	try
	{
		std::cout << arrI[-1] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << arrS[30] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	// int *a = new int();
	// (void)a;

	return 0;
}