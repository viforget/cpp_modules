#include "iter.hpp"
#include <iostream>

void	aff_nb(int const & nb)
{
	std::cout << "the number is " << nb << std::endl;
}

void	aff_fnb(float const & nb)
{
	std::cout << "the float is " << nb << std::endl;
}


int main()
{
	int nb[] = {1, 2, 3, 4, 5};

	float fnb[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	iter<int>(nb, 5, aff_nb);
	iter<float>(fnb, 5, aff_fnb);
}

// class Awesome
// {
// 	public:
// 		Awesome( void ) : _n( 42 ) { return; }
// 		int get( void ) const { return this->_n; }
// 	private:
// 		int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }

// int main() {
// 	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
// 	Awesome tab2[5];
	
// 	iter( tab, 5, print );
// 	iter( tab2, 5, print );
	
// 	return 0;
// }
