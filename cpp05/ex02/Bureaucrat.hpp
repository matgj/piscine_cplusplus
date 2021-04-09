/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 10:21:30 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/13 16:48:48 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <stdexcept>
# include <iostream>
#include "Form.hpp"

class Form ;

class Bureaucrat
{
	Bureaucrat();
  	const std::string	name_;
  	int				 	grade_;

 public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		~Bureaucrat();

  		Bureaucrat &operator=(const Bureaucrat &copy);

  		std::string getName() const;
  		int getGrade() const;
  		void Promote();
  		void Relegate();
		void signForm(Form &form);

		void executeForm(Form const & form);

  	class GradeTooHighException : public std::exception {
  	 public:
  	  const char *what() const throw();
  	};

  	class GradeTooLowException : public std::exception {
  	 public:
  	  const char *what() const throw();
  	};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &in);

#endif
