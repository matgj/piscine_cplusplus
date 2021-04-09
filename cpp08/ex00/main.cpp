/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 09:08:59 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/17 10:58:30 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "easyfind.hpp"

int main () {

	int size = 3;
	std::vector<int>vect(size,1);
	try{
		easyfind(vect,0);
	}
	catch (std::exception &e)
	{
		std::cout << "Dont find 0" << std::endl;
	}

	try{
		easyfind(vect,1);
	}
	catch (std::exception &e)
	{
		std::cout << "Dont find 1" << std::endl;
	}

	std::vector<int> list;
	for (int i = 0; i < 10; i++)
		list.push_back(i);
	try
	{
		std::cout << easyfind(list, 2) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Dont find 2" << std::endl;
	}
	try
	{
		std::cout << easyfind(list, 4) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Dont find 4" << std::endl;
	}
	try
	{
		std::cout << easyfind(list, 42) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Dont find 42" << std::endl;
	}

	std::vector <int> list2;
	for (int i = -3; i < -1; i++)
		list2.push_back(i);
	try
	{
		std::cout << easyfind(list2, 0) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Dont find 0" << std::endl;
	}
	try
	{
		std::cout << easyfind(list2, -2) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Dont find -2" << std::endl;
	}
  return 0;
}
