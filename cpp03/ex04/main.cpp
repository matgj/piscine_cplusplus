/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 10:37:23 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/11 11:25:47 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main (void)
{
	FragTrap besos ("besos");
	FragTrap pablo ("pablo");
	FragTrap police ("police");
	ScavTrap sous_fifre("sous_fifre");
	ClapTrap clapclap("clapclap",0,0,0,0,0,0,0,0, "ClapTrap");
	NinjaTrap ninja("忍者");
	 NinjaTrap ninja_victime("ninja_victime");
	SuperTrap boss("boss");

	besos.rangedAttack("pablo");
	pablo.takeDamage(20);
	pablo.beRepaired(500);
	pablo.vaulthunter_dot_exe("police");
	sous_fifre.challengeNewcomer();
 	ninja.ninjaShoebox(sous_fifre);
	ninja.ninjaShoebox(pablo);
 	ninja.ninjaShoebox(clapclap);
 	ninja.ninjaShoebox(ninja_victime);
	boss.ninjaShoebox(ninja_victime);
	boss.vaulthunter_dot_exe("besos");
	boss.rangedAttack("pablo");
	boss.meleeAttack("pablo");

	return (0);
}
