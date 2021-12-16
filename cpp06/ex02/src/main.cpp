#include "Base.hpp"
#include "ABC.hpp"
#include <iostream>

Base *	generate(void)
{
	int		r = 0;
	Base	*ret;

	srand(time(0));
	r = rand() % 3;
	switch (r)
	{
		case 0:
			ret = new A;
			break;
		case 1:
			ret = new B;
			break;
		case 2:
			ret = new C;
			break;
	}
	return (ret);
}

void	identify(Base * p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "WTF" << std::endl;
	
}

void identify( Base & p)
{
	try
	{
		static_cast<void>(dynamic_cast<A &>(p));
		std::cout << "A" << std::endl;
	}
	catch (std::exception & e) {}
	try
	{
		static_cast<void>(dynamic_cast<B &>(p));
		std::cout << "B" << std::endl;
	}
	catch (std::exception & e) {}
	try
	{
		static_cast<void>(dynamic_cast<C &>(p));
		std::cout << "C" << std::endl;
	}
	catch (std::exception & e) {}
}

int main()
{
	Base *	a;
	a = generate();
	identify(a);
	identify(*a);
	delete a;
}