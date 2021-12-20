#ifndef ITER_HPP
# define ITER_HPP

template < typename T >
void	iter(T * array, int lenght, void f(T & e))
{
	for (int i = 0; i < lenght; i++)
	{
		f(array[i]);
	}
}

#endif
