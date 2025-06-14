#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

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