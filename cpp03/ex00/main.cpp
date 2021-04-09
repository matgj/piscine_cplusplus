/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 14:33:11 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/10 13:09:25 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main (void)
{
	FragTrap besos ("besos");
	FragTrap pablo ("pablo");
	FragTrap police ("police");

	besos.rangedAttack("pablo");
	pablo.takeDamage(20);
	pablo.beRepaired(500);
	pablo.vaulthunter_dot_exe("police");
	besos.meleeAttack("pablo");

	return (0);
}
