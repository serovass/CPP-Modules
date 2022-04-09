#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed(void)
{
	//std::cout << "Default constructor called" << std::endl;
	this->rawBits = 0.0;
	return ;
}

Fixed::Fixed(const Fixed &val)
{
		//std::cout << "Copy constructor called" << std::endl;
		*this = val;
		return;
}

Fixed::Fixed(const int &ival)
{
		//std::cout << "Int constructor called" << std::endl;
		this->rawBits = ival << this->fractional_bits_number; // == ival = ival * pow(2,8)
		return;
}

Fixed::Fixed(const float &fval)
{
		//std::cout << "Float constructor called" << std::endl;
		this->rawBits = roundf(fval * (1 << this->fractional_bits_number));
		return;
}

Fixed::~Fixed(void)
{
	//std::cout << "Destructor called" << std::endl;
	return ;
}

//-------------------

bool	Fixed::operator>(const Fixed &val) const
{
	return (this->getRawBits() > val.getRawBits());
}

bool	Fixed::operator<(const Fixed &val) const
{
	return (this->getRawBits() < val.getRawBits());
}

bool	Fixed::operator>=(const Fixed &val) const
{
	return (this->getRawBits() >= val.getRawBits());
}

bool	Fixed::operator<=(const Fixed &val) const
{
	return (this->getRawBits() <= val.getRawBits());
}

bool	Fixed::operator==(const Fixed &val) const
{
	return (this->getRawBits() == val.getRawBits());
}
bool	Fixed::operator!=(const Fixed &val) const
{
	return (this->getRawBits() != val.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &val) const
{
	Fixed	res;
	res.setRawBits(this->getRawBits() + val.getRawBits());
	return (res);
}

Fixed	Fixed::operator-(const Fixed &val) const
{
	Fixed	res;
	res.setRawBits(this->getRawBits() - val.getRawBits());
	return (res);
}

Fixed	Fixed::operator*(const Fixed &val) const
{
	return(Fixed(this->toFloat() * val.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &val) const
{
	return(Fixed(this->toFloat() / val.toFloat()));
}

Fixed	&Fixed::operator++(void)
{
	this->rawBits++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	prew(*this);
	this->rawBits++;
	return (prew);
}

Fixed	&Fixed::operator--(void)
{
	this->rawBits--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	prew(*this);
	this->rawBits--;
	return (prew);
}

//-------------------

Fixed	&Fixed::operator=(const Fixed &val)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &val)
		this->rawBits = val.getRawBits();
	return (*this);
}

//-------------------

Fixed	&Fixed::min(Fixed &val1, Fixed &val2)
{
	if (val1 < val2)
		return (val1);
	else
		return (val2);
}

const Fixed	&Fixed::min(const Fixed &val1, const Fixed &val2)
{
	if (val1 < val2)
		return (val1);
	else
		return (val2);
}

Fixed	&Fixed::max(Fixed &val1, Fixed &val2)
{
	if (val1 > val2)
		return (val1);
	else
		return (val2);
}

const Fixed	&Fixed::max(const Fixed &val1, const Fixed &val2)
{
	if (val1 > val2)
		return (val1);
	else
		return (val2);
}

//-------------------

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
		//std::cout << "getRawBits member function called" << std::endl;
		return (this->rawBits);
}

void	Fixed::setRawBits(int const raw)
{
		//std::cout << "getRawBits member function called" << std::endl;
		this->rawBits = raw;
		return ;
}

std::ostream	&operator<<(std::ostream &ostream, const Fixed &fixed)
{
	ostream << fixed.toFloat();
	return (ostream);
}
