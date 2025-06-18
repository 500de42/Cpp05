#include "../include/Intern.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/AForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/RobotomyRequestForm.hpp"

// int main()
// {
//    {
//         Intern i;
//         AForm* k = i.makeForm("ShrubberyCreationForm", "test1");
//         if (k)
//         {
//             try
//             {
//                 Bureaucrat kalvin("kalvin", 30);
//                 kalvin.signForm(*k);
//                 kalvin.executeForm(*k);
//             }
//             catch(std::exception &e)
//             {
//                 std::cout << e.what();
//             }
//             delete k;
//         }
//     }
// /////////////////////////////////////////////////////
//    {
//         Intern i;
//         AForm* k = i.makeForm("PresidentialPardonForm", "test2");
//         if (k)
//         {
//             try
//             {
//                 Bureaucrat kalvin("kalvin", 1);
//                 kalvin.signForm(*k);
//                 kalvin.executeForm(*k);
//             }
//             catch(std::exception &e)
//             {
//                 std::cout << e.what();
//             }
//             delete k;
//         }
//     }
// //////////////////////////////////////////////////////
//    {
//         Intern i;
//         AForm* ka = i.makeForm("RobotomyRequestForm", "test3");
//         if (ka)
//         {
//             std::cout << "Form created: " << (ka)->GetName();
//             try
//             {
//                 // RobotomyRequestForm k("akakak");
//                 Bureaucrat kalvin("kalvin", 1);
//                 kalvin.signForm(*ka);
//                 kalvin.executeForm(*ka);
//                 std::cout << *ka;
//             }
//             catch(std::exception &e)
//             {
//                 std::cout << e.what();
//             }
//             delete ka;
//         }
//     }
// }


int main()
{
   {
        Intern i;
        AForm* k = i.makeForm("ShrubberyCreationForm", "test1");
        if (k)
        {
            try
            {
                Bureaucrat kalvin("kalvin", 140);
                kalvin.signForm(*k);
                kalvin.executeForm(*k);
            }
            catch(std::exception &e)
            {
                std::cout << e.what();
            }
            delete k;
        }
    }
/////////////////////////////////////////////////////
   {
        Intern i;
        AForm* k = i.makeForm("PresidentialPardonForm", "test2");
        if (k)
        {
            try
            {
                Bureaucrat kalvin("kalvin", 140);
                kalvin.signForm(*k);
                kalvin.executeForm(*k);
            }
            catch(std::exception &e)
            {
                std::cout << e.what();
            }
            delete k;
        }
    }
//////////////////////////////////////////////////////
   {
        Intern i;
        AForm* k = i.makeForm("RobotomyRequestForm", "test3");
        if (k)
        {
            try
            {
                Bureaucrat kalvin("kalvin", 140);
                kalvin.signForm(*k);
                kalvin.executeForm(*k);
            }
            catch(std::exception &e)
            {
                std::cout << e.what();
            }
            delete k;
        }
    }
////////////////////////////////////////////////////////////
   {
        Intern i;
        AForm* k = i.makeForm("Ro", "test3");
        if (k)
        {
            try
            {
                Bureaucrat kalvin("kalvin", 140);
                kalvin.signForm(*k);
                kalvin.executeForm(*k);
            }
            catch(std::exception &e)
            {
                std::cout << e.what();
            }
            delete k;
        }
    }
    {
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
        delete rrf;
    }
}
