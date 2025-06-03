#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : Name("DefaultName") , sign(false), GradeToSign(150), GradeToExecute(150)
{
}

Form::Form(std::string Name, int GradeToSign, int GradeToExec) : Name(Name),sign(false), GradeToSign(GradeToSign), GradeToExecute(GradeToExec)
{
}

Form::Form(const Form &copy) : Name(copy.Name), sign(copy.GetSign()), GradeToSign(copy.GradeToSign), GradeToExecute(copy.GradeToExecute)
{
}

Form::~Form()
{
}

Form &Form::operator=(const Form &src)
{
    this->sign = src.GetSign();
    return *this;
}

std::ostream &operator<<(std::ostream &out, const Form &src)
{
    out << "Form: " << src.GetName() << ", grade to sign: " << src.GetGradeToSign() << " grade to exec: " << src.GetGradeToExecute() << std::endl;
    return out;
}

int Form::GetGradeToSign() const
{
    return GradeToSign;
}

void Form::beSigned(Bureaucrat const &b)
{
    if (b.GetGrade() <= GradeToSign)
        sign = true;
    else
        throw GradeTooLowException();
}

bool Form::GetSign() const 
{
    return sign;
}

int Form::GetGradeToExecute() const
{
    return GradeToExecute;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Grade too high\n";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Grade too low\n";
}

std::string Form::GetName() const
{
    return this->Name;
}
