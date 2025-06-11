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
        bool exec;
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
        bool GetExec() const;
        virtual void execute(Bureaucrat const & executor) const = 0;
        bool GetSign() const;
        void setExec(bool Form) const;
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
        class GradeToExecTooLow : public std::exception
        {
            public :
                virtual const char *what() const throw();
        };
        class FormNoSign : public std::exception
        {
            public :
                virtual const char *what() const throw();
        };
        class FormAlreadyExec : public std::exception
        {
            public :
                virtual const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &c, AForm &src);
#endif