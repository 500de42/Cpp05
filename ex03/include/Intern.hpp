#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


class Intern
{
    public:
        AForm *makeForm(std::string name, std::string target);
        AForm* makePresidentialPardonForm(std::string target);
	    AForm* makeRobotomyRequestForm(std::string target);
	    AForm* makeShrubberyCreationForm(std::string target);
        Intern();
        ~Intern();
        Intern(const Intern &copy);
        Intern &operator=(const Intern &src);
};

#endif