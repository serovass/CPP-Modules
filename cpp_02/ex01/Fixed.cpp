#include <cmath>
#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->rawBits = 0.0;
	return ;
}

Fixed::Fixed(const Fixed &val)
{
		std::cout << "Copy constructor called" << std::endl;
		*this = val;
		return;
}

Fixed::Fixed(const int &ival)
{
		std::cout << "Int constructor called" << std::endl;
		this->rawBits = ival << this->fractional_bits_number; // == ival = ival * pow(2,8)
		return;
}

Fixed::Fixed(const float &fval)
{
		std::cout << "Float constructor called" << std::endl;
		this->rawBits = roundf(fval * (1 << this->fractional_bits_number));
		return;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed	&Fixed::operator=(const Fixed &val)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &val)
		this->rawBits = val.getRawBits();
	return (*this);
}

int	Fixed::toInt(void) const
{
	return (this->rawBits >> this->fractional_bits_number);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->rawBits / (1 << this->fractional_bits_number));
}

int	Fixed::getRawBits(void) const
{
		std::cout << "getRawBits member function called" << std::endl;
		return (this->rawBits);
}

void	Fixed::setRawBits(int const raw)
{
		std::cout << "getRawBits member function called" << std::endl;
		this->rawBits = raw;
		return ;
}

std::ostream	&operator<<(std::ostream &ostream, const Fixed &fixed)//
{
	ostream << fixed.toFloat();
	return (ostream);
}