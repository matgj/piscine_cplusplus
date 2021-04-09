/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 14:37:07 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/11 16:02:32 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

class Nounours: public Victim
{
    Nounours();
	public:
		Nounours(std::string name);
		virtual ~Nounours();

		Nounours(const Nounours &copy);
		Nounours &operator=(const Nounours &copy);

		void	getPolymorphed() const;
};

Nounours::Nounours(std::string name) : Victim(name)
{
	std::cout << GREEN << "Bisous bisous suis tout doux" << std::endl;
}

Nounours::~Nounours()
{
	std::cout << RED << "Nooooooooon suis trop mimi svp..." << std::endl;
}

Nounours::Nounours(const Nounours &copy) : Victim(copy)
{
	*this = copy;
}

Nounours	&Nounours::operator=(const Nounours &copy)
{
	setName(copy.getName());
	return (*this);
}

void	Nounours::getPolymorphed() const
{
	std::cout << BLUE << this->getName() << " has been turned into a TED WHO SMOKES A LOT OF GANJA BOOOOOONG mouhahahaha!" << RESET << std::endl;
}

int main(void)
{
	// Sorcerer noparam();
	// Sorcerer sorcier("gandalf");
	// Sorcerer gandalf("gandalf", "lebest");
	// Sorcerer dumbledore("dumbledore", "lebest?");
	// //Victim victim;
	// Victim mathis("mathis");
	// Peon	peon("peon");
	// Nounours nounours("nounours");

	// std::cout << dumbledore << std::endl;
	// std::cout << gandalf << std::endl;
	// std::cout << mathis << std::endl;

	// mathis.getPolymorphed();
	// Victim mat("mat");
	// mat = mathis;
	// std::cout << mat << std::endl;
	// dumbledore.polymorph(mathis);
	// gandalf.polymorph(mathis);
	// dumbledore.polymorph(peon);
	// dumbledore.polymorph(nounours);
	// nounours.getPolymorphed();

	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	return 0;
}


