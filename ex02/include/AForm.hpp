#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private :
        const std::string Name;
        bool sign;
        const int GradeToSign;
        const int GradeToExecute;
    public : 
        AForm();
        AForm(std::string Name, int GradeToSign, int GradeToExec);
        ~AForm();
        AForm(const AForm &copy);
        AForm &operator=(const AForm &src);
        ////////////////////////////
        void beSigned(Bureaucrat const &b);
        void execute(Bureaucrat const &b);
        std::string GetName() const;
        int GetGradeToSign() const;
        int GetGradeToExecute() const;
        virtual void executeForm(AForm const & form) = 0;
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

std::ostream &operator<<(std::ostream &c, AForm &src);
#endif