/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 17:25:47 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/13 18:14:49 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include <iostream>


class Intern
{
   std::string	formNames[3];
   Form		*(*create[3])(std::string target);

 public:
  Intern();
  Intern(const Intern &copy);
  ~Intern();

  Intern &operator=(const Intern &copy);
  Form *makeForm(std::string formName, std::string target);
};

#endif
