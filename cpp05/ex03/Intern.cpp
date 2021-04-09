/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 17:25:41 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/26 18:01:01 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
  	this->create[0] = ShrubberyCreationForm::create;
	this->formNames[0] = "shrubberycreation";
	this->create[1] = RobotomyRequestForm::create;
	this->formNames[1] = "robotomyrequest";
	this->create[2] = PresidentialPardonForm::create;
	this->formNames[2] = "presidentialpardon";
}

Intern::~Intern()
{
}

Intern::Intern(const Intern &copy)
{
  *this = copy;
}

Intern  &Intern::operator=(const Intern &copy)
{
  (void)copy;
  return (*this);
}

Form *Intern::makeForm(std::string formName, std::string target)
{
	for (int i = 0; i < 3; i++)
	{
		if (this->formNames[i] == formName)
		{
			std::cout << "Interns creates " << formName << std::endl;
			return ((this->create[i])(target));
		}
	}
	std::cout << "No form with name " << formName << "." << std::endl;
	return (NULL);
}
