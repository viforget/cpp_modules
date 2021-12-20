#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template< typename T>
class Array {

public:
	Array( void ) : _n(0) 
	{
		_array = new T[0];
	}

	~Array( void )
	{
		delete this->_array;
	}

	Array( Array const & ref ) : _n(ref.size())
	{
		this->_array = new T[this->_n];
		for (unsigned int i = 0; i < this->_n; i++)
			_array[i] = ref.getArray()[i];
	}

	void operator=( Array const & ref )
	{
		this->_n = ref.size();
		delete this->_array;
		this->_array = new T[this->_n];
		for (unsigned int i = 0; i < this->_n; i++)
			_array[i] = ref.getArray()[i];

	}

	Array( unsigned int n ) : _n(n)
	{
		this->_array = new T[n];
	}

	T & operator[]( unsigned int i )
	{
		if (i < 0 || i >= this->_n)
			throw(std::exception());
		return (this->_array[i]);
	}

	T *	getArray() const
	{
		return (_array);
	}

	unsigned int size() const
	{
		return (_n);
	}

private:
	T *				_array;
	unsigned int	_n;
};

#endif
