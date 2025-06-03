#include "../include/ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : target(target)
{
    std::string finalName = target + "_shrubbery";
    std::ostream newFile(finalName.c_str());

    if (newFile)
    {
        std::cout << "Error file\n";
        exit(1);
    }
    
}
