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
	~Fixed( void );

	Fixed	&operator=( const Fixed &val );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );


};

#endif
