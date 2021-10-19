# include "Bureaucrat.hpp"

std::ostream &operator << (std::ostream &out, const Bureaucrat &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (out);
}

Bureaucrat::Bureaucrat(void) : _name("-No name-"), _grade(150) { }

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
    if (grade <= 0)
        throw Bureaucrat::GradeTooLowException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooHighException();
    else
        _grade = grade;
}

Bureaucrat::Bureaucrat(std::string const name) : _name(name), _grade(150) {}

Bureaucrat::~Bureaucrat(void) { }

std::string Bureaucrat::getName() const
{
    return (_name);
}

int Bureaucrat::getGrade() const
{
    return (_grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
    if (other._grade <= 0)
        throw Bureaucrat::GradeTooLowException();
    else if (other._grade > 150)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade = other._grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (other._grade <= 0)
        throw Bureaucrat::GradeTooLowException();
    else if (other._grade > 150)
        throw Bureaucrat::GradeTooHighException();
    if (this == &other)
        return (*this);
    this->_grade = other._grade;
    return (*this);
}

void Bureaucrat::upGrade(void)
{
    ++this->_grade;
    if (_grade <= 0)
        throw Bureaucrat::GradeTooLowException();
    else if (_grade > 150)
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::downGrade(void)
{
    --this->_grade;
    if (_grade <= 0)
        throw Bureaucrat::GradeTooLowException();
    else if (_grade > 150)
        throw Bureaucrat::GradeTooHighException();
}