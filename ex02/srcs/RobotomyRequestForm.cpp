#include "../include/RobotomyRequestForm.hpp"
#include <fstream>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm() : AForm("default", 72, 25), target("default")
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 25), target(target)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy)
{
    this->target = copy.target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
    this->target = src.target;
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor)
{
    if (this->GetSign() == true)
    {
        if (executor.GetGrade() <= this->GetGradeToExecute())
        {
            if (!this->GetExec())
            {
                // std::cout << "The Bureaucrat " << executor.GetName() << "has ecxecuted the Form: " << this->GetName() << std::endl;
                this->setExec(true);
                std::cout << "drilling noises\n";
                srand(time(NULL));
                if (rand() % 2 == 0)
                    std::cout << this->target << " has been robotomized successfully\n";
                else
                    std::cout << "the robotomy for " << this->target << " has failed\n";    
            }
            else
                throw RobotomyRequestForm::FormAlreadyExec();
        }
        else
        {
            std::cout << "The Bureaucrat " << executor.GetName() << "has not signed the Form: " << this->GetName() << "because ";
            throw RobotomyRequestForm::GradeToExecTooLow();
        }
    }
    else 
        throw RobotomyRequestForm::FormNoSign();
}

