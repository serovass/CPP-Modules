#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>


class Fixed
{

private:

	int					rawBits;
	static const int	fractional_bits_number = 8;

public:

	Fixed( void );
	Fixed( const Fixed &src );
	Fixed(const int &ival);
	Fixed(const float &fval);
	~Fixed( void );

	bool	operator>(const Fixed &val) const;
	bool	operator<(const Fixed &val) const;
	bool	operator>=(const Fixed &val) const;
	bool	operator<=(const Fixed &val) const;
	bool	operator==(const Fixed &val) const;
	bool	operator!=(const Fixed &val) const;

	Fixed	operator+(const Fixed &val) const;
	Fixed	operator-(const Fixed &val) const;
	Fixed	operator*(const Fixed &val) const;
	Fixed	operator/(const Fixed &val) const;

	Fixed	&operator++(void);
	Fixed	operator++(int);
	Fixed	&operator--(void);
	Fixed	operator--(int);

	static Fixed		&min(Fixed &val1, Fixed &val2);
	static const Fixed	&min(const Fixed &val, const Fixed &val2);
	
	static Fixed		&max(Fixed &val1, Fixed &val2);
	static const Fixed	&max(const Fixed &val, const Fixed &val2);

	Fixed	&operator=( const Fixed &val );

	int		toInt(void) const;
	float	toFloat(void) const;

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

};

std::ostream	&operator<<(std::ostream &ostream, const Fixed &fixed);

#endif
