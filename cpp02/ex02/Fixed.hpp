#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed {

public:

	Fixed( void );
	~Fixed( void );
	Fixed( Fixed const & src );
	Fixed( int nb );
	Fixed( float nb );

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	void	operator= ( Fixed const &a );

	float	toFloat(void) const;
	int		toInt(void) const;

	static const Fixed & max(const Fixed & a, const Fixed & b );
	static const Fixed & min(const Fixed & a, const Fixed & b );

private:
	int					value;
	static const int	bitsf = 8;
};

std::ostream&	operator<<( std::ostream &flux, Fixed const& nbF );

bool			operator<(Fixed const &a, Fixed const& b);
bool			operator>(Fixed const &a, Fixed const& b);
bool			operator<=(Fixed const &a, Fixed const& b);
bool			operator>=(Fixed const &a, Fixed const& b);
bool			operator==(Fixed const &a, Fixed const& b);
bool			operator!=(Fixed const &a, Fixed const& b);

Fixed			operator+(Fixed const& a, Fixed const& b);
Fixed			operator-(Fixed const& a, Fixed const& b);
Fixed			operator*(Fixed const& a, Fixed const& b);
Fixed			operator/(Fixed const& a, Fixed const& b);


#endif