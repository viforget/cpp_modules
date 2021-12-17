#include "Bureaucrat.hpp"
#include "Form.hpp" 

int main()
{
	Bureaucrat	gerard("Gerard", 150);
	Bureaucrat	jj("Jean-Jacques", 5);
	Bureaucrat	christian("Christian", 1);
	Form a38("a38", 5);

	std::cout << a38 << std::endl;
	gerard.signForm(a38);
	std::cout << a38 << std::endl;
	christian.signForm(a38);
	std::cout << a38 << std::endl;
}