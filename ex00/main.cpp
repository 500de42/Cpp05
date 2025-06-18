#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a("leo", 1);
        std::cout << a;
        a.UpGrade();
    }
    catch(std::exception &e)
    {
        std::cout << e.what();
    }
    try
    {
        Bureaucrat k("leo", 150);
        std::cout << k;
        k.DownGrade();
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
//         Bureaucrat a("leo", 0);
//         std::cout << a;
//         a.UpGrade();
//     }
//     catch(std::exception &e)
//     {
//         std::cout << e.what();
//     }
//     try
//     {
//         Bureaucrat k("leo", 151);
//         std::cout << k;
//         k.DownGrade();
//     }
//     catch(std::exception &e)
//     {
//         std::cout << e.what();
//     }
// }
