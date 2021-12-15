#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>

class	Data {

public:
	Data( void );
	~Data( void );
	Data( Data const & src );
	void	operator= ( Data const & a );

	Data( std::string const & str );
	std::string	getVal( void ) const;

private:
	std::string _val;
};

#endif
