#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm
{
    private :
        std::string target;
    public :
        PresidentialPardonForm();
        PresidentialPardonForm(std::string const target);
        ~PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &copy);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &src);
        ///////////////////////////////////////////////////////////////////
        virtual void execute(Bureaucrat const & executor) const ;
        std::string getTarget() const;
};

std::ostream &operator<<(std::ostream &c, const PresidentialPardonForm *src);

#endif

