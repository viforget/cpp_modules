#include "Bureaucrat.hpp"
#include "Form.hpp" 
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern	someRandomIntern;
	Form	*rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	delete rrf;
	rrf = someRandomIntern.makeForm("shrubbery creation", "forrest");
	delete rrf;
	rrf = someRandomIntern.makeForm("presidential pardon", "Juan");
	delete rrf;
	rrf = someRandomIntern.makeForm("BE A PIE", "Billy");
	delete rrf;
}
