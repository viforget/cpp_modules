#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp" 
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class	Intern {

public:
	Form *	makeForm(std::string name_form, std::string target);
};

#endif