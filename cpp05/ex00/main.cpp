#include "Bureaucrat.hpp"

int main()
{
	{
		Bureaucrat	gerard("Gerard", 150);
		Bureaucrat	christian("Christian", 1);

		std::cout << gerard << std::endl;
		std::cout << christian << std::endl;

		gerard.incGrade();
		std::cout << gerard << std::endl;
		gerard.decGrade();
		std::cout << gerard << std::endl;
		
		try
		{
			gerard.decGrade();
		}
		catch (std::exception & e)
		{
			std::cout << "Error " << e.what() << std::endl;
		}

		try
		{
			christian.incGrade();
		}
		catch (std::exception & e)
		{
			std::cout << "Error " << e.what() << std::endl;
		}

		std::cout << gerard << std::endl;
		std::cout << christian << std::endl;
	}

	std::cout << "-----------------------------" << std::endl;
	
	{
		try
		{
			Bureaucrat	michel("Michel", 151);
		}
		catch (std::exception & e)
		{
			std::cout << "Error " << e.what() << std::endl;
		}
		
		try
		{
			Bureaucrat	jj("Jean-Jacques", -7);
		}
		catch (std::exception & e)
		{
			std::cout << "Error " << e.what() << std::endl;
		}
	}
	return(0);
}