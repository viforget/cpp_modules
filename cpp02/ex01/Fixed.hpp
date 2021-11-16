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

private:
	int					value;
	static const int	bitsf = 8;
};

std::ostream& operator<<( std::ostream &flux, Fixed const& nbF );

#endif