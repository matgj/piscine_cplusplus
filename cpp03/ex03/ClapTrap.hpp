/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 16:12:45 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/11 14:36:54 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# define RESET "\x1B[0m"
# define BOLD "\x1B[1m"
# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define BLUE "\x1B[34m"

# include <iostream>
# include <string>
# include <stdlib.h>

class ClapTrap
{
	protected :
		std::string			name;
		unsigned int		HP;
		unsigned int		HP_max;
		unsigned int		EP;
		unsigned int		EP_max;
		unsigned int		lvl;
		unsigned int		atc_melee;
		unsigned int		atc_ranged;
		unsigned int		reduc_armor;
		std::string			type;

public:
	ClapTrap();
	ClapTrap(std::string name, unsigned int HP, unsigned int HP_max, unsigned int EP, unsigned int EP_max, unsigned int lvl, unsigned int atc_melee, unsigned int atc_ranged, unsigned int reduc_armor, std::string type);
	~ClapTrap();
	ClapTrap(const ClapTrap &copy);
	ClapTrap &operator=(const ClapTrap &copy);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amout);
	void beRepaired(unsigned int amout);
	std::string getName();
};

#endif
