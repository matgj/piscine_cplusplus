/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 10:05:50 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/13 19:12:08 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main (void)
{
		Bureaucrat sarko("sarkozy", 1);
		Bureaucrat macron("macron", 99);
		Bureaucrat clone("clone", 130);

		Form *cerisier;
		Form *robot;
		Form *presidential;

		Intern mathis;

		std::cout << macron << std::endl;
		std::cout << sarko << std::endl;
		std::cout << clone << std::endl;
		robot = mathis.makeForm("robotomyrequest","bender");
		cerisier = mathis.makeForm("shrubberycreation","japan");
		presidential = mathis.makeForm("presidentialpardon","obama");
		Form *bla;
		bla = mathis.makeForm("bla","bla");
		macron.signForm(*robot);
		macron.signForm(*cerisier);
		macron.signForm(*presidential);

		sarko.signForm(*robot);
		sarko.signForm(*cerisier);
		sarko.signForm(*presidential);

		macron.executeForm(*robot);
	 	macron.executeForm(*cerisier);
	 	macron.executeForm(*presidential);
	 	sarko.executeForm(*robot);
	 	sarko.executeForm(*cerisier);
	 	sarko.executeForm(*presidential);

	return (0);
}

