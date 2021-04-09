/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 10:26:23 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/13 16:49:10 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name_(name)
{
	if (grade > 150)
  	  throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
    	throw Bureaucrat::GradeTooHighException();
	grade_ = grade;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name_(copy.getName())
{
	*this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
	grade_ = copy.getGrade();
	return (*this);
}

std::string Bureaucrat::getName() const
{
  return name_;
}

int Bureaucrat::getGrade() const
{
  return grade_;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade are too low bro!";
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade are too high bro!";
}

void Bureaucrat::Promote()
{
  if (grade_ == 1)
    throw Bureaucrat::GradeTooHighException();
  grade_--;
}

void Bureaucrat::Relegate()
{
  if (grade_ == 150)
    throw Bureaucrat::GradeTooLowException();
  grade_++;
}

void Bureaucrat::signForm(Form &form)
{
  try
  {
	  form.beSigned(*this); std::cout << name_ << " signs " << form.getName() << std::endl;
  }
  catch (std::exception &e)
  {
  	std::cout << name_ << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
  }
}

void Bureaucrat::executeForm(Form const &form)
{
  form.execute(*this);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &in) {
  return (out << in.getName() << ", bureaucrat grade " << in.getGrade());
}
