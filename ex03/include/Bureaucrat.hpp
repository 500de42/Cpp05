#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "../include/AForm.hpp"

class AForm;

class Bureaucrat
{
    private :
        std::string const Name;
        int Grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string const Name, int Grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat &operator=(const Bureaucrat &src);
        /////////////////////////////////////////////
        std::string GetName() const;
        int GetGrade() const;
        void UpGrade();
        void DownGrade();
        void signForm(AForm &form);
        void executeForm(AForm const & form);
        class GradeTooLowExeption : public std::exception
        {
            public :
                virtual const char *what() const throw();
        };
        class GradeTooHighExeption : public std::exception
        {
            public :
                virtual const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &src);

#endif
