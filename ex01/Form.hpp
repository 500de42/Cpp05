#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

// class Bureaucrat;

class Form
{
    private :
        const std::string Name;
        bool sign;
        const int GradeToSign;
        const int GradeToExecute;
    public : 
        Form();
        Form(std::string Name, int GradeToSign, int GradeToExec);
        ~Form();
        Form(const Form &copy);
        Form &operator=(const Form &src);
        ////////////////////////////
        void beSigned(Bureaucrat const &b);
        std::string GetName() const;
        int GetGradeToSign() const;
        int GetGradeToExecute() const;
        bool GetSign() const;
        ////////////////////////////////
        class GradeTooHighException : public std::exception
        {
            public :
                virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public :
                virtual const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &c, Form &src);
#endif