/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 17:47:20 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/11 20:40:41 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"


class Bazooka : public AWeapon
{
	public:
		Bazooka() : AWeapon("Bazooka", 40, 100) {};
		void	attack() const {std::cout << "* BOOOOOOOOOOOOOOOM *" << std::endl;}
		virtual ~Bazooka() {};
};

class Fatal : public Enemy
{
	public:
		Fatal() : Enemy(30,"Chris Prolls") {};
		virtual ~Fatal() {};
};

int main(void)
{
	//AWeapon awp("awp", 100, 3);
	// PlasmaRifle plasma("plasma", 100, 3);
	// PlasmaRifle plasma;
	// PowerFist fist;

	// std::cout << plasma.getAPCost() << std::endl;
	// std::cout << plasma.getDamage() << std::endl;
	// plasma.attack();

	// std::cout << fist.getAPCost() << std::endl;
	// std::cout << fist.getDamage() << std::endl;
	// fist.attack();

	// Enemy bob(300, "big bob");
	// std::cout << bob.getType() << std::endl;
	// std::cout << bob.getHP() << std::endl;
	// plasma.attack();
	// bob.takeDamage(21);
	// std::cout << bob.getHP() << std::endl;

	// SuperMutant mutant;
	// std::cout << mutant.getHP() << std::endl;
	// plasma.attack();
	// mutant.takeDamage(21);
	// std::cout << mutant.getHP() << std::endl;

	// RadScorpion scorpion;
	// std::cout << scorpion.getHP() << std::endl;
	// fist.attack();
	// scorpion.takeDamage(50);
	// std::cout << scorpion.getHP() << std::endl;

	std::cout << "---------------------------------------------------------------------------------------------" << std::endl;

	Character* moi = new Character("moi");
	std::cout << *moi;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	moi->equip(pr);
	std::cout << *moi;
	moi->equip(pf);
	moi->attack(b);
	std::cout << *moi;
	moi->equip(pr);
	std::cout << *moi;
	moi->attack(b);
	std::cout << *moi;
	moi->attack(b);
	std::cout << *moi;

	// Character* mickaelyoun = new Character("mickaelyoun");
	// AWeapon* bazook_ptr = new Bazooka();
	// Enemy* fatal_ptr = new Fatal();
	// std::cout << *mickaelyoun;
	// mickaelyoun->equip(bazook_ptr);
	// std::cout << *mickaelyoun;
	// mickaelyoun->attack(fatal_ptr);
	// mickaelyoun->attack(fatal_ptr);
	// mickaelyoun->attack(fatal_ptr);
	// mickaelyoun->attack(fatal_ptr);
	// mickaelyoun->attack(fatal_ptr);
	// mickaelyoun->attack(fatal_ptr);

	return 0;
}
