#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <cstdlib>

class Span {

public:
	Span( void );
	~Span( void );
	Span( Span const & ref );
	Span( unsigned int n );
	void			operator=( Span const & ref );
	int 			operator[]( unsigned int i ) const;
	void			addNumber( int nb );
	unsigned int	size() const;
	unsigned int	getFill() const;
	int				shortestSpan();
	int				longestSpan();

private:
	unsigned int	_fill;
	unsigned int	_N;
	int *			_ar;

};

#endif