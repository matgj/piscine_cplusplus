/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 10:26:23 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/13 13:19:06 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	return "Grade is too low bro!";
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high bro!";
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

std::ostream &operator<<(std::ostream &out, Bureaucrat const &in) {
  return (out << in.getName() << ", bureaucrat grade " << in.getGrade());
}
