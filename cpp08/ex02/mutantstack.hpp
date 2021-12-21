#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template < typename T >
class MutantStack : public std::stack<T> {

public:
	MutantStack( void ) {return;}
	~MutantStack( void ) {return;}
	MutantStack( MutantStack const & ref ) : std::stack<T>(ref)
	{
		return;
	}
	typedef T * iterator;

	iterator	begin();
	iterator	end()
	{
		return(&this->top() + 1);
	}

private:

};

#endif