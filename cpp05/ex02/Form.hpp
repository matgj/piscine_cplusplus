/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 12:40:45 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/13 18:22:30 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
#include "Bureaucrat.hpp"

class Bureaucrat ;

class Form {
  Form();
  const std::string	name_;
  bool				signed_;
  const int 		gradetoExec_;
  const int 		gradetoSign_;
  std::string   target_;

 public:
  Form(std::string name, int gradetoExec, int gradetoSign);
  Form(const Form &copy);
  virtual ~Form();

  Form &operator=(const Form &copy);

  std::string getName() const;
  bool isSigned() const;
  int gradetoExec() const;
  int gradetoSign() const;
  void beSigned(const Bureaucrat &b);

  void setTarget(std::string &target);
  std::string getTarget() const;

  void execute(Bureaucrat const & executor) const;
  virtual void doing() const = 0;

  class GradeTooHighException : public std::exception {
   public:
    const char *what() const throw();
  };

  class GradeTooLowException : public std::exception {
   public:
    const char *what() const throw();
  };

  class AlreadySignedException : public std::exception {
   public:
    const char *what() const throw();
  };

  class NotSignedException : public std::exception {
   public:
    const char *what() const throw();
   };

   class FileErrorException : public std::exception {
   public:
    const char *what() const throw();
   };
};

std::ostream &operator<<(std::ostream &out, Form const &in);

#endif
