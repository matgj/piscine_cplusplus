/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 10:16:51 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/12 11:48:12 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main(void)
{
	ISquad *team = new Squad;
	ISpaceMarine *jack = new TacticalMarine;
	ISpaceMarine *robotox = new AssaultTerminator;

	std::cout << "Couting my team :" << team->getCount() << std::endl;
	jack->battleCry();
	robotox->battleCry();
	std::cout << BLUE << "Jack and robotox seems good, i ll add them to my squad" << RESET << std::endl;
	team->push(jack);
	team->push(robotox);
	team->push(jack);
	std::cout << BLUE << "Couting my team :" << team->getCount() << RESET << std::endl;
	std::cout << GREEN << "Nice, i only have "  << team->getCount() << " members, notice in main that i tried to add jack again." << RESET << std::endl;

	std::cout << BLUE << "Now i ll clone jack, let him attack and push it to my squad" << RESET << std::endl;
	ISpaceMarine *clone = jack->clone();
	team->push(clone);
	clone->meleeAttack();
	clone->rangedAttack();
	std::cout << BLUE << "Couting my team :" << team->getCount() << RESET << std::endl;
	std::cout << GREEN << "Nice, i have "  << team->getCount() << " members." << RESET << std::endl;
	team->push(team->getUnit(100));
	team->push(team->getUnit(1)->clone());
	std::cout << BLUE << "Couting my team :" << team->getCount() << RESET << std::endl;
	std::cout << GREEN << "Nice, i have "  << team->getCount() << " members." << RESET << std::endl;
	delete team;

	// new TacticalMarine = robotox->clone();

	// ISpaceMarine* bob = new TacticalMarine;
	// ISpaceMarine* jim = new AssaultTerminator;
	// ISquad* vlc = new Squad;
	// vlc->push(bob);
	// vlc->push(jim);
	// for (int i = 0; i < vlc->getCount(); ++i)
	// {
	// ISpaceMarine* cur = vlc->getUnit(i);
	// cur->battleCry();
	// cur->rangedAttack();
	// cur->meleeAttack();
	// }
	// delete vlc;
	return 0;
}
