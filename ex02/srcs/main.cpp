#include "../include/AForm.hpp"
#include "../include/Bureaucrat.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        ShrubberyCreationForm k("akakak");
        Bureaucrat kalvin("kalvin", 30);
        kalvin.signForm(k);
        kalvin.executeForm(k);
    }
    catch(std::exception &e)
    {
        std::cout << e.what();
    }
/////////////////////////////////////////////////////
    try
    {
        PresidentialPardonForm k("akakak");
        Bureaucrat kalvin("kalvin", 1);
        kalvin.signForm(k);
        kalvin.executeForm(k);
    }
    catch(std::exception &e)
    {
        std::cout << e.what();
    }
//////////////////////////////////////////////////////
    try
    {
        RobotomyRequestForm k("akakak");
        Bureaucrat kalvin("kalvin", 1);
        kalvin.signForm(k);
        kalvin.executeForm(k);
    }
    catch(std::exception &e)
    {
        std::cout << e.what();
    }
}


// int main()
// {
//     try
//     {
//         ShrubberyCreationForm k("akakak");
//         Bureaucrat kalvin("kalvin", 140);
//         kalvin.signForm(k);
//         kalvin.executeForm(k);
//     }
//     catch(std::exception &e)
//     {
//         std::cout << e.what();
//     }
// /////////////////////////////////////////////////////
//     try
//     {
//         PresidentialPardonForm k("akakak");
//         Bureaucrat kalvin("kalvin", 19);
//         kalvin.signForm(k);
//         kalvin.executeForm(k);
//     }
//     catch(std::exception &e)
//     {
//         std::cout << e.what();
//     }
// //////////////////////////////////////////////////////
//     try
//     {
//         RobotomyRequestForm k("akakak");
//         Bureaucrat kalvin("kalvin", 80);
//         kalvin.signForm(k);
//         kalvin.executeForm(k);
//     }
//     catch(std::exception &e)
//     {
//         std::cout << e.what();
//     }
// }
