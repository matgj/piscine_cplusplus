/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 14:11:22 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/12 19:28:28 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include "IMateriaSource.hpp"
# include "Character.hpp"
# include "Cure.hpp"
# include "Ice.hpp"
# include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* moi = new Character("moi");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	moi->equip(tmp);
	tmp = src->createMateria("cure");
	moi->equip(tmp);
	ICharacter* bob = new Character("bob");
	moi->use(0, *bob);
	moi->use(1, *bob);
	delete bob;
	delete moi;
	delete src;
	return 0;

// 	std::cout << GREEN << "creation des characteres mage et ange" << RESET << std::endl;
// 	ICharacter *mage = new Character("mage");
// 	ICharacter *ange = new Character("ange");
// 	std::cout <<  GREEN <<"creation de source de materia" << RESET <<std::endl;
// 	IMateriaSource *nature = new MateriaSource;
// 	std::cout << GREEN << "la source nature apprend des nouveaux materia" << RESET << std::endl;
// 	nature->learnMateria(new Ice());
// 	nature->learnMateria(new Cure());
// 	nature->learnMateria(new Cure());
// 	nature->learnMateria(new Cure());
// 	nature->learnMateria(new Cure());
// 	std::cout <<  GREEN <<"creation dun materia a partir de la source" << RESET << std::endl;
// 	AMateria *icolator;
// 	AMateria *ico2;
// 	AMateria *ico3;
// 	AMateria *ico4;
// 	AMateria *ico5;
// 	icolator  =nature->createMateria("ice");
// 	ico2  =nature->createMateria("ice");
// 	ico3  =nature->createMateria("ice");
// 	ico4  =nature->createMateria("ice");
// 	ico5  =nature->createMateria("ice");

// 	std::cout << GREEN << "equip le mage dun materia" << RESET << std::endl;
// 	mage->equip(icolator);
// 	mage->equip(ico2);
// 	mage->equip(ico3);
// 	mage->equip(ico4);
// 	mage->equip(ico5);
	
// 	std::cout << GREEN << "cree une victime et use les materias sur la grosse victime" << RESET << std::endl;
// 	ICharacter *victim = new Character("victim");
// 	mage->use(0, *victim); //appel de icolator
// 	mage->use(0, *victim);//appel de icolator
// 	mage->use(2, *victim);
// 	mage->use(3, *victim);
// 	mage->use(4, *victim);
// 	mage->use(4, *victim);

// 	std::cout << GREEN << "check xp de icolator qui augmente de 10 a chaque appel" <<RESET << std::endl;
// 	std::cout << icolator->getXP() << std::endl;
// 	std::cout << GREEN << "check xp de ico2 avant dassigner sa valeur a icolator" << RESET << std::endl;
// 	std::cout << ico2->getXP() << std::endl;
// 	ico2 = icolator;
// 	std::cout << GREEN << "check xp de ico2 apres assignation de sa valeur a icolator" << RESET << std::endl;
// 	std::cout << ico2->getXP() << std::endl;
// std::cout << GREEN << "enleve les materias et essaye dattaquer, rien se passe" << RESET << std::endl;
// 	mage->unequip(0);
// 	mage->unequip(1);
// 	mage->unequip(2);
// 	mage->unequip(3);
// 	mage->unequip(4);
// 	mage->use(0, *victim); //appel de icolator
// 	mage->use(0, *victim);//appel de icolator
// 	mage->use(2, *victim);
// 	mage->use(3, *victim);
// 	mage->use(4, *victim);
	
// 	std::cout << GREEN << "equip ange dico" <<RESET << std::endl;
// 	ange->equip(ico2);
// 	ange->equip(ico3);
// 	ange->equip(ico4);
// 	mage->equip(ico5);

// 	std::cout <<  GREEN <<"reequipe le mage de icolator, assigne mage a ange et use lisolator transmis, check de si on supprime bien linventaire lors de lassignation, check l xp de icolator" <<RESET << std::endl;
// 	mage->equip(icolator);
// 	ange = mage;
// 	ange->use(0, *victim);
// 	ange->use(3, *victim);

// 	std::cout << icolator->getXP() << std::endl;

}
