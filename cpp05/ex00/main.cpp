/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 10:05:50 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/13 12:30:05 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void)
{
	try{
		Bureaucrat sarko("sarkozy", 1);
		Bureaucrat macron("macron", 149);
		Bureaucrat clone("clone", 130);

		clone = macron;

		std::cout << macron << std::endl;
		std::cout << sarko << std::endl;
		std::cout << clone << std::endl;
		for (int i = 0; i < 153; i++)
		{
			try{
				macron.Promote();
			}
			catch(std::exception & e){
				std::cout << "Error when promoting bureaucrat: " << e.what() << std::endl;
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
		std::cout << "Error when trying to create bureaucrat: " << e.what()  << std::endl;
	}
	return (0);
}
