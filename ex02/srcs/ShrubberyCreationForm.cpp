#include "../include/ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>
#include <cstdlib>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("default", 145, 137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : AForm("ShrubberyCreationForm", 145, 137), target(target)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy)
{
    this->target = copy.getTarget();
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
    this->target = src.getTarget();
    return *this;
}

void ShrubberyCreationForm::TreeFile() const 
{
    std::string finalName = this->target + "_shrubbery";
    std::ofstream newFile(finalName.c_str());

    if (!newFile)
    {
        std::cerr << "Error file\n";
        return ;
    }
    newFile << "       _-_\n";
    newFile << "    /~~   ~~\\\n";
    newFile << " /~~         ~~\\\n";
    newFile << "{               }\n";
    newFile << " \\  _-     -_  /\n";
    newFile << "   ~  \\\\ //  ~\n";
    newFile << "_- -   | | _- _\n";
    newFile << "  _ -  | |   -_\n";
    newFile << "      // \\\\\n";
    newFile.close();
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->GetSign() == true)
    {
        if (executor.GetGrade() <= this->GetGradeToExecute())
        {
            std::cout << "The Bureaucrat " << executor.GetName() << " has ecxecuted the Form: " << this->GetName() << std::endl;
            this->TreeFile();
        }
        else
        {
            std::cout << "The Bureaucrat " << executor.GetName() << " has not ecxecuted the Form: " << this->GetName() << "because ";
            throw ShrubberyCreationForm::GradeToExecTooLow();
        }
    }
    else 
        throw ShrubberyCreationForm::FormNoSign();
}

std::string ShrubberyCreationForm::getTarget() const
{
    return this->target;
}
