#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("shrubbery creation", 145, 137), _target("untitled_target")
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm & src) : Form(src.getName(), 145, 137), _target(src.getTarget())
{
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("shrubbery creation", 145, 137), _target(target)
{
	return;
}

std::string const	ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}


void	ShrubberyCreationForm::beExecuted(Bureaucrat const & b) const
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
	std::ofstream ofs(this->getTarget() + "_shrubbery");
	ofs << "                                                         ." << std::endl <<
"                                              .         ;  " << std::endl <<
"                 .              .              ;%     ;;   " << std::endl <<
"                   ,           ,                :;%  %;   " << std::endl <<
"                    :         ;                   :;%;'     ., "  << std::endl <<
"           ,.        %;     %;            ;        %;'    ,;" << std::endl <<
"             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl <<
"              %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl <<
"               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl <<
"                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl <<
"                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl <<
"                    `:%;.  :;bd%;          %;@%;'" << std::endl <<
"                      `@%:.  :;%.         ;@@%;'" << std::endl <<
"                        `@%.  `;@%.      ;@@%; " << std::endl <<
"                          `@%%. `@%%    ;@@%; " << std::endl <<
"                            ;@%. :@%%  %@@%; " << std::endl <<
"                              %@bd%%%bd%%:; " << std::endl <<
"                                #@%%%%%:;;" << std::endl <<
"                                %@@%%%::;" << std::endl <<
"                                %@@@%(o);  . '" << std::endl <<
"                                %@@@o%;:(.,' " << std::endl <<
"                            `.. %@@@o%::;" << std::endl <<
"                               `)@@@o%::;" << std::endl <<
"                                %@@(o)::;" << std::endl <<
"                               .%@@@@%::;" << std::endl <<
"                               ;%@@@@%::;." << std::endl <<
"                              ;%@@@@%%:;;;." << std::endl <<
"                          ...;%@@@@@%%:;;;;,.."<< std::endl;
ofs.close();
}
