#ifndef TYPECONVERTER_HPP
# define TYPECONVERTER_HPP
# include <iostream>
# include <stdexcept>


class TypeConverter
{
public:
	
	TypeConverter(void);
	TypeConverter(const TypeConverter &src);
	~TypeConverter(void);

	TypeConverter	&operator=(const TypeConverter &rhs);

	std::string	convertToChar(char *input);
	std::string	convertToInt(char *input);
	std::string	convertToFloat(char *input);
	std::string	convertToDouble(char *input);

private:

	double	inputD;

	bool	checkArgument(char *input);

};

#endif
