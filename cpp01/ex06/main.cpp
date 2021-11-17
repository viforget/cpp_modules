#include "Karen.hpp"

int main(int ac, char **av)
{
	Karen ppl;

	if (ac !=  2)
	{
		std::cout << "That’s unacceptable!" << std::endl;
		return (1);
	}
	std::string	key[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string	level = av[1];
	size_t		i = 0;

	while(level != key[i] && i < 4)
		i++;
	if (i == 4)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	while(i < 4)
	{
		switch (i)
		{
			case 0:
				std::cout << "[ DEBUG ]" << std::endl;
				break;
			case 1:
				std::cout << "[ INFO ]" << std::endl;
				break;
			case 2:
				std::cout << "[ WARNING ]" << std::endl;
				break;
			case 3:
				std::cout << "[ ERROR ]" << std::endl;
				break;
			default:
				break;
		}		
		ppl.complain(key[i]);
		if (i != 3)
			std::cout << std::endl;
		i++;

	}
}
