#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const Name, unsigned int Grade)
{
    try
    {
        this->Name = Name;
        if (Grade == 0)
            throw std::out_of_range("Grade too high");
        else if (Grade > 150)
            throw std::out_of_range("Grade too low"); 
    }
    catch (const std::out_of_range &e)
    {
        Bureaucrat::GradeTooHighExeption();
    }
    catch (const std::out_of_range &e)
    {
        Bureaucrat::GradeTooLowExeption();
    }
}

unsigned int Bureaucrat::GetGrade() const
{
    return this->Grade;
}

std::string Bureaucrat::GetName() const
{
    return this->Name;
}

void Bureaucrat::UpGrade()
{

}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &src)
{
    out << src.GetName() << ", bureaucrat grade " << src.GetName();
    return out;
}

