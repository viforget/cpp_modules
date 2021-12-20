#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>

template< typename T >
int	easyfind(T const & cont, int nb)
{
	typename T::const_iterator	it = cont.begin();
	typename T::const_iterator	en = cont.end();
	while(it != en)
	{
		if (*it == nb)
			return(*it);
		it++;
	}
	throw(std::exception());
}

#endif