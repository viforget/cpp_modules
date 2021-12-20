#include "easyfind.hpp"
#include <iostream>
#include <list>

void	display_int(int n)
{
	std::cout << n << std::endl;
}

int main()
{
	{
		std::list<int>	lst;
		lst.push_back(1);
		lst.push_back(42);
		lst.push_back(19);
		lst.push_back(-1);
		lst.push_back(0);
		try
		{
			std::cout << easyfind(lst, 19) << std::endl;
			std::cout << easyfind(lst, 4) << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "error for this one" << std::endl;
		}
	}
	{
		std::array<int>	lst;
		lst.push_back(1);
		lst.push_back(42);
		lst.push_back(19);
		lst.push_back(-1);
		lst.push_back(0);
		try
		{
			std::cout << easyfind(lst, 19) << std::endl;
			std::cout << easyfind(lst, 4) << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "error for this one" << std::endl;
		}
	}
}