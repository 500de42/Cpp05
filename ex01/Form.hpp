#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Form
{
    private :
        const std::string Name;
        bool sign;
        const int GradeToSign;
        const int GradeToExecute;
    public : 
        Form();
        void beSigned(Bureaucrat &b);
        std::string GetName() const;
        int GetGradeToSign() const;
        int GetGradeToExecute() const;
        bool GetSign() const;
        class GradeTooHighException : public std::exception
        {
            public :
                virtual const char *what() const throw();
        };
        class :GradeTooLowException : public std::exception
        {
            public :
                virtual const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &c, Form &src);
#endif