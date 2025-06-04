#include "../include/ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("default", 154, 137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : AForm("ShrubberyCreationForm", 154, 137), target(target)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

void ShrubberyCreationForm::TreeFile()
{
    std::string finalName = target + "_shrubbery";
    std::ofstream newFile(finalName.c_str());

    if (newFile)
    {
        std::cerr << "Error file\n";
        exit(1);
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

void ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
    if (this->GetSign() == true)
    {
        if (executor.GetGrade() <= this->GetGradeToExecute())
        {
            if (!this->GetExec())
            {
                std::cout << "The Bureaucrat " << executor.GetName() << "has ecxecuted the Form: " << this->GetName() << std::endl;
                this->setExec(true);
                this->TreeFile();
            }
            else
                throw ShrubberyCreationForm::FormAlreadyExec();
        }
        else
        {
            std::cout << "The Bureaucrat " << executor.GetName() << "has not signed the Form: " << this->GetName() << "because ";
            throw ShrubberyCreationForm::GradeToExecTooLow();
        }
    }
    else 
        throw ShrubberyCreationForm::FormNoSign();
}
