#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
    private :
        std::string const Name;
        unsigned int Grade;
    public:
        Bureaucrat(std::string const Name, unsigned int Grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat &operator=(const Bureaucrat &src);
        std::string GetName() const;
        unsigned int GetGrade() const;
        void UpGrade();
        void DownGrade();
        void GradeTooLowExeption();
        void GradeTooHighExeption();
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &src);

#endif
