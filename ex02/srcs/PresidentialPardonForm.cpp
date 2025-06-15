#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("default", 25, 5), target("default")
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), target(target)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy)
{
    this->target = copy.target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const 
{
    if (this->GetSign() == true)
    {
        if (executor.GetGrade() <= this->GetGradeToExecute())
        {
            std::cout << this->target << " has been pardoned by Zaphod Beeblebrox\n";
        }
        else
        {
            std::cout << "The Bureaucrat " << executor.GetName() << " has not ecxecuted the Form: " << this->GetName() << "because ";
            throw PresidentialPardonForm::GradeToExecTooLow();
        }
    }
    else 
        throw PresidentialPardonForm::FormNoSign();
}
