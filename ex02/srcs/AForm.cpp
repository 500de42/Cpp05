#include "../include/AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : Name("DefaultName") , sign(false), GradeToSign(150), GradeToExecute(150)
{
}

AForm::AForm(std::string Name, int GradeToSign, int GradeToExec) : Name(Name),sign(false), GradeToSign(GradeToSign), GradeToExecute(GradeToExec)
{
}

AForm::AForm(const AForm &copy) : Name(copy.Name), sign(copy.GetSign()), GradeToSign(copy.GradeToSign), GradeToExecute(copy.GradeToExecute)
{
}

AForm::~AForm()
{
}

AForm &AForm::operator=(const AForm &src)
{
    this->sign = src.GetSign();
    return *this;
}

std::ostream &operator<<(std::ostream &out, const AForm &src)
{
    out << "AForm: " << src.GetName() << ", grade to sign: " << src.GetGradeToSign() << " grade to exec: " << src.GetGradeToExecute() << std::endl;
    return out;
}

int AForm::GetGradeToSign() const
{
    return GradeToSign;
}

void AForm::beSigned(Bureaucrat const &b)
{
    if (b.GetGrade() <= GradeToSign)
        sign = true;
    else
        throw GradeTooLowException();
}

bool AForm::GetSign() const 
{
    return sign;
}

int AForm::GetGradeToExecute() const
{
    return GradeToExecute;
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return "Grade too high\n";
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return "Grade too low\n";
}

std::string AForm::GetName() const
{
    return this->Name;
}
