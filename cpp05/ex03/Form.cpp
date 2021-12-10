#include "Form.hpp"

Form::Form() : _name("untitled_file"), _sign(0), _grade(150), _grade_ex(150)
{
	return;
}

Form::~Form()
{
	return;
}

Form::Form(Form const & cpy) : _name(cpy.getName()), _sign(cpy.getSign()), _grade(cpy.getGrade()), _grade_ex(cpy.getGradeEx())
{
	return;
}

Form::Form( std::string const & name, int grade) : _name(name), _sign(0), _grade(grade), _grade_ex(150)
{
	return;
}

Form::Form( std::string const & name, int grade, int grade_ex) : _name(name), _sign(0), _grade(grade), _grade_ex(grade_ex)
{
	return;
}

Form::Form( std::string const & name) : _name(name), _sign(0), _grade(150), _grade_ex(150)
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

int 				Form::getGradeEx() const
{
	return (this->_grade_ex);
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

const char* 		Form::NoExecutionExeption::what() const throw()
{
	return ("execution is not possible for this form");
}

const char* 		Form::NoSignatureExeption::what() const throw()
{
	return ("the form is not signed");
}

void				Form::beSigned(Bureaucrat const & b)
{
	if (b.getGrade() <= this->getGrade())
		this->_sign = true;
	else
		throw(Form::GradeTooLowException());
}

void				Form::beExecuted(Bureaucrat const & b) const
{
	(void)b;
	throw(Form::NoExecutionExeption());
}

std::ostream& operator<<( std::ostream &flux, Form const& form )
{
	if (form.getSign())
    	flux << "name : " << form.getName() << ", grade : " << form.getGrade() << ", signed";
	else
		flux << "name : " << form.getName() << ", grade : " << form.getGrade() << ", not signed";
	return flux;
}
