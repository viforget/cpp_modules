#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("robotomy request", 72, 45), _target("untitled_target")
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm & src) : Form(src.getName(), 72, 45), _target(src.getTarget())
{
	return;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("robotomy request", 72, 45), _target(target)
{
	return;
}

std::string const	RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}


void	RobotomyRequestForm::beExecuted(Bureaucrat const & b) const
{
	srand(time(0));
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
	std::cout << "Brzrzrzrrrrzrzbllblblblblblllblblblblblblblblght" << std::endl;
	if (rand() % 2)
		std::cout << this->_target << " has been lobotomised" << std::endl;
	else
		std::cout << this->_target << "'s lobotomy failed" << std::endl;
}