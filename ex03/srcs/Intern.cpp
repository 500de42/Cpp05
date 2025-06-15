#include "../include/Intern.hpp"


Intern::Intern()
{

}

Intern::~Intern()
{

}

Intern::Intern(const Intern &copy)
{
    (void) copy;
}

Intern &Intern::operator=(const Intern &src)
{
    (void)src;
    return *this;
}


AForm *Intern::makeForm(std::string name, std::string target)
{
    if (name == "ShrubberyCreationForm")
        return new ShrubberyCreationForm(target);
    else if (name == "RobotomyRequestForm")
        return new RobotomyRequestForm(target);
    else if (name == "PresidentialPardonForm")
        return new PresidentialPardonForm(target);
    std::cout << "The name passed in parametre it's not good\n";
    return (NULL);
}
