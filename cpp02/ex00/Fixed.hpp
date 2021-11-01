#ifndef FIXED_HPP
# define FIXED_HPP

class	Fixed {

public:

	Fixed( void );
	~Fixed( void );
	Fixed( Fixed const & src );

	int getRawBits(void) const;
	void setRawBits(int const raw);
	void operator= ( Fixed const &a );

private:
	int					value;
	static const int	bitsf = 8;
};

#endif