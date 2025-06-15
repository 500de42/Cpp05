#include "../include/AForm.hpp"
#include "../include/Bureaucrat.hpp"

AForm::AForm() : Name("DefaultName") , sign(false), GradeToSign(150), GradeToExecute(150), exec(false)
{
}

AForm::AForm(std::string Name, int GradeToSign, int GradeToExec) : Name(Name),sign(false), GradeToSign(GradeToSign), GradeToExecute(GradeToExec), exec(false)
{
    if (GradeToSign < 1)
        throw Bureaucrat::GradeTooHighExeption();
    else if (GradeToSign > 150)
        throw Bureaucrat::GradeTooLowExeption();
    if (GradeToExecute < 1)
        throw Bureaucrat::GradeTooHighExeption();
    else if (GradeToExecute > 150)
        throw Bureaucrat::GradeTooLowExeption();
}

AForm::AForm(const AForm &copy) : Name(copy.Name), sign(copy.GetSign()), GradeToSign(copy.GradeToSign), GradeToExecute(copy.GradeToExecute), exec(copy.exec)
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

const char *AForm::FormNoSign::what() const throw()
{
    return "Form not signed\n";
}

const char *AForm::GradeToExecTooLow::what() const throw()
{
    return "Grade to exec too low\n";
}

const char *AForm::FormAlreadyExec::what() const throw()
{
    return "Form already exec\n";
}

std::string AForm::GetName() const
{
    return this->Name;
}
