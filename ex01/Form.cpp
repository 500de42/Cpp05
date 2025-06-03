#include "Form.hpp"

Form::Form() : Name("DefaultName") , sign(false), GradeToExecute(150), GradeToSign(150)
{
}

Form::Form(const Form &copy) : Name(copy.Name), GradeToExecute(copy.GradeToExecute), GradeToSign(copy.GradeToSign)
{

}

Form::~Form()
{

}

std::ostream &operator<<(std::ostream &out, const Form &src)
{
    out << src.GetName() << ", bureaucrat grade " << src.GetGrade() << std::endl;
    return out;
}

void Form::beSigned(Bureaucrat &b)
{
    if (b.GetGrade() < this->GradeToSign)
        this->sign = true;
    else
        throw GradeTooLowException();
}



