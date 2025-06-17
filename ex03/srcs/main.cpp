#include "../include/Intern.hpp"
#include "../include/ShrubberyCreationForm.hpp"

// int main()
// {
//     Intern i;
//     AForm* k = i.makeForm("ShrubberyCreationForm", "sasa");

//     if (k)   
//     {     
//         try
//         {
//             Bureaucrat kalvin("kalvin", 140);
//             kalvin.signForm(*k);
//             kalvin.executeForm(*k);
//         }
//         catch(std::exception &e)
//         { 
//             std::cout << e.what();
//         }
//             delete k;
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
                ShrubberyCreationForm k("akakak");
                Bureaucrat kalvin("kalvin", 30);
                kalvin.signForm(k);
                kalvin.executeForm(k);
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
                PresidentialPardonForm k("akakak");
                Bureaucrat kalvin("kalvin", 1);
                kalvin.signForm(k);
                kalvin.executeForm(k);
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
            std::cout << "Form created: " << (k)->GetName();
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
            delete k;
        }
    }
}


// int main()
// {
//    {
//         Intern i;
//         AForm* k = i.makeForm("ShrubberyCreationForm", "test1");
//         if (k)
//         {
//             try
//             {
//                 ShrubberyCreationForm k("akakak");
//                 Bureaucrat kalvin("kalvin", 140);
//                 kalvin.signForm(k);
//                 kalvin.executeForm(k);
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
//                 PresidentialPardonForm k("akakak");
//                 Bureaucrat kalvin("kalvin", 140);
//                 kalvin.signForm(k);
//                 kalvin.executeForm(k);
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
//         AForm* k = i.makeForm("RobotomyRequestForm", "test3");
//         if (k)
//         {
//             try
//             {
//                 RobotomyRequestForm k("akakak");
//                 Bureaucrat kalvin("kalvin", 140);
//                 kalvin.signForm(k);
//                 kalvin.executeForm(k);
//             }
//             catch(std::exception &e)
//             {
//                 std::cout << e.what();
//             }
//             delete k;
//         }
//     }
// ////////////////////////////////////////////////////////////
//    {
//         Intern i;
//         AForm* k = i.makeForm("Ro", "test3");
//         if (k)
//         {
//             try
//             {
//                 RobotomyRequestForm k("akakak");
//                 Bureaucrat kalvin("kalvin", 140);
//                 kalvin.signForm(k);
//                 kalvin.executeForm(k);
//             }
//             catch(std::exception &e)
//             {
//                 std::cout << e.what();
//             }
//             delete k;
//         }
//     }
// }
