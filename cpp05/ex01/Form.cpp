#include "Form.hpp"

Form::Form() : _name("untitled file"), _sign(0), _grade(150)
{
	return;
}

Form::~Form()
{
	return;
}

Form::Form(Form const & cpy) : _name(cpy.getName()), _sign(cpy.getSign()), _grade(cpy.getGrade())
{
	return;
}

Form::Form( std::string const & name, int grade) : _name(name), _sign(0), _grade(grade)
{
	return;
}

Form::Form( std::string const & name) : _name(name), _sign(0), _grade(150)
{
	return;
}

std::string const	Form::getName() const
{
	return (this->_name);
}

bool				Form::getSign() const
{
	return (this->_sign);
}

int 				Form::getGrade() const
{
	return (this->_grade);
}

void 				Form::operator= ( Bureaucrat const &a )
{
	(void)a;
}

const char* 		Form::GradeTooHighException::what() const throw()
{
	return ("the grade is too high");
}

const char* 		Form::GradeTooLowException::what() const throw()
{
	return ("the grade is too low");
}

void				Form::beSigned(Bureaucrat const & b)
{
	if (b.getGrade() <= this->getGrade())
		this->_sign = true;
	else
		throw(Form::GradeTooLowException());
}

std::ostream& operator<<( std::ostream &flux, Form const& form )
{
	if (form.getSign())
    	flux << "name : " << form.getName() << ", grade : " << form.getGrade() << ", signed";
	else
		flux << "name : " << form.getName() << ", grade : " << form.getGrade() << ", not signed";
	return flux;
}
