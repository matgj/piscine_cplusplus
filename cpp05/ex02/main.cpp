/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 10:05:50 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/13 17:02:39 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main (void)
{
	try{
		Bureaucrat sarko("sarkozy", 1);
		Bureaucrat macron("macron", 129);
		Bureaucrat clone("clone", 130);
		//Form		decret("decret", 20, 127);
//		Form		ordonnance("ordonnance", 0, 0);
		PresidentialPardonForm letter("sorry");
		RobotomyRequestForm becomerobot("bender");
		ShrubberyCreationForm cerisier("jardin");
		clone = macron;

		std::cout << macron << std::endl;
		std::cout << sarko << std::endl;
		std::cout << clone << std::endl;
		for (int i = 0; i < 4; i++)
		{
			try{
				macron.Promote();
				std::cout << macron << std::endl;
			}
			catch(std::exception &e){
				std::cout << "Error when promoting bureaucrats : " << e.what() << std::endl;
			}
			try{
				//decret.beSigned(macron);
				macron.signForm(letter);
				macron.signForm(becomerobot);
				macron.signForm(cerisier);
				sarko.signForm(letter);
				sarko.signForm(becomerobot);
				sarko.signForm(cerisier);
			}

			catch(std::exception &e)
			{
				std::cout << "Error when signing forms: " << e.what() << std::endl;
			}

			try{
				// macron.executeForm(letter);
				// macron.executeForm(becomerobot);
				// macron.executeForm(cerisier);
				sarko.executeForm(letter);
				sarko.executeForm(becomerobot);
				sarko.executeForm(cerisier);
			}
			catch(std::exception &e)
			{
				std::cout << "Error when executing forms: " << e.what() << std::endl;
			}
		}
		clone.Promote();
		std::cout << clone << std::endl;
		clone.Relegate();
		std::cout << clone << std::endl;
	}
	catch(std::exception & e){
		std::cout << "Error when trying to create bureaucrat or a form: " << e.what()  << std::endl;
	}
	return (0);
}

