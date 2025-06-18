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


AForm* Intern::makePresidentialPardonForm(std::string target)
{
	std::cout << "Intern creates " << target << " PresidentialPardonForm" << std::endl;
	return (new PresidentialPardonForm(target));
}

AForm* Intern::makeRobotomyRequestForm(std::string target)
{
	std::cout << "Intern creates " << target << " RobotomyForm" << std::endl;
	return (new RobotomyRequestForm(target));
}

AForm* Intern::makeShrubberyCreationForm(std::string target)
{
	std::cout << "Intern creates " << target << " Shrubberyform" << std::endl;
	return (new ShrubberyCreationForm(target));
}

AForm *Intern::makeForm(std::string name, std::string target)
{
    std::string tab[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    AForm *(Intern::*form[3])(std::string target) = {&Intern::makeShrubberyCreationForm, &Intern::makeRobotomyRequestForm, &Intern::makePresidentialPardonForm};
    for (int i = 0; i < 3; i++)
    {
        if (name == tab[i])
           return (this->*form[i])(target);
    }
    std::cout << "The name passed as parameter is not good\n";
    return (NULL);
}
