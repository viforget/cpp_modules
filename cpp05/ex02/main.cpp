#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp" 

int main()
{
	ShrubberyCreationForm	fo("forest", "tree");
	RobotomyRequestForm		ro("Gladys", "lobotomy");
	PresidentialPardonForm	pr("Peter", "pardon");
	Bureaucrat				jo("John", 1);
	Bureaucrat				jojo("Joseph", 150);

	try
	{
		jo.executeForm(fo);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	jo.signForm(fo);
	try
	{
		jojo.executeForm(fo);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	jo.executeForm(fo);

	jo.signForm(ro);
	try
	{
		jojo.executeForm(ro);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	jo.executeForm(ro);

	jo.signForm(pr);
	try
	{
		jojo.executeForm(pr);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	jo.executeForm(pr);
}