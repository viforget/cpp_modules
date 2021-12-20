#include "Array.hpp"

int	main()
{
{
	Array<int> a(5);
	Array<int> empty;

	std::cout << "a[2] : " << a[2] << std::endl;
	a[2] = 5;
	std::cout << "I can change the value of a[2] : " << a[2] << std::endl;
	Array<int> b(a);
	std::cout << "If I make a copy of a, the value b[2] is the same : " <<  b[2] << std::endl;
	b[2] = 19;
	std::cout << "But if I change b[2] : " <<  b[2] << std::endl;
	std::cout << "It doesn't change a[2] : " <<  a[2] << std::endl;
	a = b;
	std::cout << "The '=' operator can change a : " <<  a[2] << std::endl;
	std::cout << "The size of a is " <<  a.size() << std::endl;
	std::cout << "The size of b is " <<  b.size() << std::endl;
	std::cout << "The size of empty is " <<  empty.size() << std::endl;
	std::cout << "I can't access out of the array" << std::endl;
	try
	{
		std::cout << a[5] << std::endl;
		std::cout << "Nervermind." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "You see" << std::endl;
	}
}
std::cout << "--------------" << std::endl;
{
	std::cout << "This work also with float" << std::endl;
	Array<float> a(5);
	Array<float> empty;

	std::cout << "a[2] : " << a[2] << std::endl;
	a[2] = 5.2;
	std::cout << "I can change the value of a[2] : " << a[2] << std::endl;
	Array<float> b(a);
	std::cout << "If I make a copy of a, the value b[2] is the same : " <<  b[2] << std::endl;
	b[2] = 19.42;
	std::cout << "But if I change b[2] : " <<  b[2] << std::endl;
	std::cout << "It doesn't change a[2] : " <<  a[2] << std::endl;
	a = b;
	std::cout << "The '=' operator can change a : " <<  a[2] << std::endl;
	std::cout << "The size of a is " <<  a.size() << std::endl;
	std::cout << "The size of b is " <<  b.size() << std::endl;
	std::cout << "The size of empty is " <<  empty.size() << std::endl;
	std::cout << "I can't access out of the array" << std::endl;
	try
	{
		std::cout << a[5] << std::endl;
		std::cout << "Nervermind." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "You see" << std::endl;
	}
}
}
