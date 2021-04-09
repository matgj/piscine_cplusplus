/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 14:33:11 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/11 12:52:18 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main (void)
{
	FragTrap besos ("besos");
	FragTrap pablo ("pablo");
	FragTrap police ("police");
	ScavTrap sous_fifre("sous_fifre");

	besos.rangedAttack("pablo");
	pablo.takeDamage(20);
	pablo.beRepaired(500);
	pablo.vaulthunter_dot_exe("police");
	sous_fifre.challengeNewcomer();

	sous_fifre.rangedAttack("pablo");
	sous_fifre.takeDamage(20);
	sous_fifre.beRepaired(500);
	sous_fifre.meleeAttack("Pablo");
	return (0);
}
