#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Form k("Total", 1, 180);
        Bureaucrat kalvin("kalvin", 30);
        kalvin.signForm(k);
    }
    catch(std::exception &e)
    {
        std::cout << e.what();
    }
    try
    {
        Form k("Total", -22, 25);
        Bureaucrat kalvin("kalvin", 30);
        kalvin.signForm(k);
    }
    catch(std::exception &e)
    {
        std::cout << e.what();
    }
    try
    {
        Form k("Total", 15, 25);
        Bureaucrat kalvin("kalvin", 300);
        kalvin.signForm(k);
    }
    catch(std::exception &e)
    {
        std::cout << e.what();
    }
    try
    {
        Form k("Total", 25, 15);
        Bureaucrat kalvin("kalvin", 1);
        kalvin.signForm(k);
    }
    catch(std::exception &e)
    {
        std::cout << e.what();
    }
    
}
