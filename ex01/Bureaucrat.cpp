#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : Name("DefaultName") , Grade(150)
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : Name(copy.Name)
{
    this->Grade = copy.GetGrade();
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(std::string const Name, int Grade) : Name(Name), Grade(Grade)
{
    if (Grade < 1)
        throw Bureaucrat::GradeTooHighExeption();
    else if (Grade > 150)
        throw Bureaucrat::GradeTooLowExeption();
}

int Bureaucrat::GetGrade() const
{
    return this->Grade;
}

std::string Bureaucrat::GetName() const
{
    return this->Name;
}

void Bureaucrat::UpGrade()
{
    this->Grade--;
    if (this->Grade < 1)
        throw GradeTooHighExeption();
}

void Bureaucrat::DownGrade()
{
    this->Grade++;
    if (this->Grade > 150)
        throw GradeTooLowExeption();
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &src)
{
    out << src.GetName() << ", bureaucrat grade " << src.GetGrade() << std::endl;
    return out;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
    this->Grade = src.GetGrade();
    return *this;
}

const char *Bureaucrat::GradeTooHighExeption::what() const throw()
{
    return "Grade too high\n";
}

const char *Bureaucrat::GradeTooLowExeption::what() const throw()
{
    return "Grade too low\n";
}


void Bureaucrat::signForm(Form &form)
{
    if (form.GetGradeToSign() >= this->GetGrade())
        std::cout << "The bureaucrat: " << this->GetName() << " has signed the form :" << form.GetName() << std::endl;
    else
        std::cout << "The bureaucrat: " << this->GetName() << " couldn't sign " << form.GetName() << " because his grade is too low" << std::endl;
    form.beSigned(*this);
}
