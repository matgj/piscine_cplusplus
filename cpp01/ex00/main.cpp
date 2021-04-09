/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 11:36:34 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/06 10:54:27 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony	*ptr;

	ptr = new Pony;
	ptr->name = "Rocco";
	ptr->gender = "Male";
	sleep(1);
	std::cout << BLUE << "Look at me," << ptr->name << " the poney, i'am a little pony on the heap, let's do the SHOW!" << RESET << std::endl;
	sleep(5);
	ptr->drink();
	sleep(5);
	ptr->rap();
	sleep(5);
	ptr->fuck();
	sleep(5);
	delete ptr;
}

void	ponyOnTheStack(void)
{
	Pony pony;

	pony.name = "Freddy";
	pony.gender = "Female";
	sleep(1);
	std::cout << BLUE << "Look at me, " << pony.name << " the poney,i'am a little pony on the stack, let's do the SHOW!" << RESET << std::endl;
	sleep(5);
	pony.drink();
	sleep(5);
	pony.rap();
	sleep(5);
	pony.fuck();
	sleep(5);
}

int main(void)
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return (0);
}
