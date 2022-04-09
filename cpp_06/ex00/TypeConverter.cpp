#include <cmath>
#include <iomanip>
#include <limits>
#include <cstdlib>
#include <iostream>
#include "TypeConverter.hpp"

TypeConverter::TypeConverter( void )
{
}

TypeConverter::TypeConverter( TypeConverter const & src )
{
	*this = src;
}

TypeConverter::~TypeConverter( void )
{
}


TypeConverter &	TypeConverter::operator=( TypeConverter const & rhs )
{
	(void)rhs;
	return *this;
}

//--------------------------------------------------------------------------

std::string	TypeConverter::convertToChar(char *input)
{
	if (!this->checkArgument(input))
		return "impossible";

	if (!isascii(this->inputD))
		return "impossible";

	if (!isprint(this->inputD))
		return "Non displayable";

	char c[] = {0, 0};
	c[0] = static_cast <char> (this->inputD);

	return ("'" + (std::string)c + "'");
}

std::string	TypeConverter::convertToInt(char *input)
{
	if (!this->checkArgument(input))
		return "impossible";

	if (this->inputD > std::numeric_limits <int>::max() ||
		this->inputD < std::numeric_limits <int>::min() ||
		std::to_string(this->inputD) == "nan")
		return "impossible";

	int i = static_cast <int> (this->inputD);

	return std::to_string(i);
}

std::string	TypeConverter::convertToFloat(char *input)
{
	if (!this->checkArgument(input))
		return "impossible";

	if (this->inputD == std::numeric_limits <double>::infinity())
		return "inff";

	if (this->inputD == -std::numeric_limits <double>::infinity())
		return "-inff";

	if (this->inputD > std::numeric_limits <float>::max() ||
		this->inputD < -std::numeric_limits <float>::max() )
		return "impossible";

	float f = static_cast <float> (this->inputD);

	std::string str = std::to_string(f);
	if (!isdigit(str[0]))
		return (str + "f");

	int i = str.find_first_of(".", 0) + 2;
	return (str.erase(i) + "f");
}

std::string	TypeConverter::convertToDouble(char *input)
{
	if (!this->checkArgument(input))
		return "impossible";

	if (this->inputD == std::numeric_limits <double>::infinity())
		return "inf";

	if (this->inputD == -std::numeric_limits <double>::infinity())
		return "-inf";

	if (this->inputD > std::numeric_limits <double>::max() ||
		this->inputD < -std::numeric_limits <double>::max() )
		return "impossible";

	std::string str = std::to_string(this->inputD);
	if (!isdigit(str[0]))
		return str;

	int i = str.find_first_of(".", 0) + 2;
	return (str.erase(i));
}

//--------------------------------------------------------------
bool TypeConverter::checkArgument(char *input)
{
	this->inputD = strtod(input, NULL);

	if (!this->inputD && input[0] != '0')
		return false;

	return true;
}
