#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Form k("Total", 25, 15);
        Bureaucrat kalvin("kalvin", 30);
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
