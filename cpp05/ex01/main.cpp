/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 10:05:50 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/13 16:13:49 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main (void)
{
	try{
		Bureaucrat sarko("sarkozy", 1);
		Bureaucrat macron("macron", 130);
		Bureaucrat clone("clone", 130);
		Form		decret("decret", 140, 60);
//		Form		ordonnance("ordonnance", 0, 0);

		clone = macron;

		std::cout << macron << std::endl;
		std::cout << sarko << std::endl;
		std::cout << clone << std::endl;
		for (int i = 0; i < 4; i++)
		{
			try{
				macron.Promote();
			}
			catch(std::exception & e){
				std::cout << "Error when promoting bureaucrat: " << e.what() << std::endl;
			}
			try{
				//decret.beSigned(macron);
				macron.signForm(decret);
				sarko.signForm(decret);
			}
			catch(std::exception &e)
			{
				std::cout << "Error when signing forms: " << e.what() << std::endl;
			}
			try{
				sarko.Relegate();
			}
			catch(std::exception &e){
				std::cout << "Error when relegating bureaucrat: " << e.what() << std::endl;
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
