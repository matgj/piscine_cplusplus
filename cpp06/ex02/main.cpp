/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 18:12:44 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/14 18:35:11 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Classes.hpp"
#include "Base.hpp"
#include <typeinfo>

void identify_from_pointer(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;

}

void identify_from_reference(Base &p)
{
	Base	base;
	try
	{
		base = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast err) {}
	try
	{
		base = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::bad_cast err) {}
	try
	{
		base = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::bad_cast err) {}
}

Base *generate(void)
{
	int i = rand() % 3;
	if (i == 0)
		return (new A);
	else if (i == 1)
		return (new B);
	else
		return (new C);
}

int main(void)
{
	srand(time(0));
	Base *uno = generate();
	Base *dos = generate();
	Base *tres = generate();
	Base *tequila = new A;

	identify_from_pointer(uno);
	identify_from_pointer(dos);
	identify_from_pointer(tres);
	std::cout << "tequila: ";
	identify_from_pointer(tequila);
	identify_from_reference(*uno);
	identify_from_reference(*dos);
	identify_from_reference(*tres);

	delete uno;
	delete dos;
	delete tres;
	delete tequila;
}
