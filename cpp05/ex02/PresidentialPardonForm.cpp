#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("untitle_file", 25, 5), _target("untitled_target")
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm & src) : Form(src.getName(), 25, 5), _target(src.getTarget())
{
	return;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("untitle_file", 25, 5), _target(target)
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target, std::string name) : Form(name, 25, 5), _target(target)
{
	return;
}


std::string const	PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}


void	PresidentialPardonForm::beExecuted(Bureaucrat const & b) const
{
	if (!this->getSign())
	{
		throw(Form::NoSignatureExeption());
		return;
	}
	if (b.getGrade() >= this->_grade_ex)
	{
		throw(Form::GradeTooLowException());
		return;
	}
	std::cout << this->_target << " has been forgive by Zafod Beeblebrox" << std::endl;
}