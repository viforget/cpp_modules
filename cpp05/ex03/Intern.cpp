#include "Intern.hpp"

Form *	Intern::makeForm(std::string name_form, std::string target)
{
	int i = 0;
	std::string	forms[] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	Form *	ret;
	while(i < 3 && name_form != forms[i])
		i++;
	switch (i)
	{
		case 0:
			ret = new RobotomyRequestForm(target);
			std::cout << "Intern creates robotomy request" << std::endl;
			break;
		case 1:
			ret = new ShrubberyCreationForm(target);
			std::cout << "Intern creates shrubbery creation"  << std::endl;
			break;
		case 2:
			ret = new PresidentialPardonForm(target);
			std::cout << "Intern creates presidential pardon" << std::endl;
			break;
		default:
			ret = NULL;
			std::cout << "Intern didn't understand what you yelled at them" << std::endl;
	}
	return(ret);
}
