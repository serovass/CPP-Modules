#include <iomanip>
#include "TypeConverter.hpp"


class ArgumentNumberException : public std::exception
{
	virtual const char* what() const throw()
	{
		return ("Usage error");
	}
};

//----------------------------------------------
int	main(int ac, char **av)
{
	try
	{
		if (ac != 2)
			throw ArgumentNumberException();

		TypeConverter tc = TypeConverter();

		std::cout << std::fixed;
		std::cout << std::setprecision(1);

		std::cout << "char: " << tc.convertToChar(av[1]) << std::endl;
		std::cout << "int: " << tc.convertToInt(av[1]) << std::endl;
		std::cout << "float: " << tc.convertToFloat(av[1]) << std::endl;
		std::cout << "double: " << tc.convertToDouble(av[1]) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
