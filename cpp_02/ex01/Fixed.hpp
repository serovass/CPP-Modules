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

	Fixed	&operator=( const Fixed &val );

	int		toInt(void) const;
	float	toFloat(void) const;

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );


};

std::ostream	&operator<<(std::ostream &ostream, const Fixed &fixed);

#endif
