#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <iomanip>
#include <tgmath.h>

class	Convert {

public:
	Convert( void );
	~Convert( void );
	Convert( Convert const & src );
	void	operator= ( Convert const & a );

	Convert( std::string str );

	int		getInt( void ) const;
	char	getChar( void ) const;
	float	getFloat( void ) const;
	double	getDouble( void ) const;
	bool	getIsChar( void ) const;
	bool	getIsInt( void ) const;
	void	printInt( void ) const;
	void	printChar( void ) const;
	void	printFloat( void ) const;
	void	printDouble( void ) const;

private:
	int		_i;
	char	_c;
	float	_f;
	double	_d;
	bool	_is_char;
	bool	_is_int;

};

#endif
