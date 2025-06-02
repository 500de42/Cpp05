#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
    private :
        const std::string Name;
        bool sign;
        const int GradeToSign;
        const int GradeToExecute;
    public : 
        void beSigned(Bureaucrat b);
        std::string GetName() const;
        int GetGradeToSign() const;
        int GetGradeToExecute() const;
        bool GetSign() const;
};

std::ostream &operator<<(std::ostream &c, Form &src);

#endif