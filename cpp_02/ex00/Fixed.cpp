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