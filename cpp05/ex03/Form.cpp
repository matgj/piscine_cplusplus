/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 12:50:46 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/13 17:03:23 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form (std::string name, int gradetoExec, int gradetoSign) : name_(name), gradetoExec_(gradetoExec), gradetoSign_(gradetoSign)
{
	 if (gradetoExec > 150 || gradetoSign > 150)
      throw Form::GradeTooLowException();
    else if (gradetoExec < 1 || gradetoSign < 1)
      throw Form::GradeTooHighException();
    signed_ = false;
}

Form::~Form()
{
}

Form::Form(const Form &copy) : name_(copy.getName()), signed_(copy.isSigned()), gradetoExec_(copy.gradetoExec()), gradetoSign_(copy.gradetoSign())
{
  *this = copy;
}

Form  &Form::operator=(const Form &copy)
{
  signed_ = copy.signed_;
  return (*this);
}

const char *Form::GradeTooHighException::what() const throw()
{
  return "Grade is too high bro!";
}

const char *Form::GradeTooLowException::what() const throw()
{
  return "Grade is too low bro!";
}

const char *Form::AlreadySignedException::what() const throw()
{
  return "Form is already signed bro!";
}

const char *Form::FileErrorException::what() const throw()
{
  return "File Error bro!";
}

const char *Form::NotSignedException::what() const throw()
{
  return "Form is not signed bro!";
}

std::string Form::getName() const
{
  return name_;
}

bool Form::isSigned() const
{
  return signed_;
}

int Form::gradetoExec() const
{
  return gradetoExec_;
}

int Form::gradetoSign() const
{
  return gradetoSign_;
}

void Form::beSigned(const Bureaucrat &b)
{
  if (b.getGrade() > gradetoSign_) {
    throw Form::GradeTooLowException();
  }
  else if (signed_) {
    throw Form::AlreadySignedException();
  }
  else
    signed_ = true;
}

void Form::setTarget(std::string &target) {
  target_ = target;
}

std::string Form::getTarget() const {
  return target_;
}

void Form::execute(Bureaucrat const & executor) const
{
  if (executor.getGrade() > gradetoExec_)
  {
    throw Form::GradeTooLowException();
  }
  else if (signed_ == false)
  {
    throw Form::NotSignedException();
  }
  else
    this->doing();
}

std::ostream &operator<<(std::ostream &out, Form const &in)
{
  return (out << in.getName() << " form - signed : " << in.isSigned()  << " - grade required : " << in.gradetoExec() << " - grade to sign : " << in.gradetoSign());
}
