/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 14:33:09 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/11 12:12:19 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# define RESET "\x1B[0m"
# define BOLD "\x1B[1m"
# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define BLUE "\x1B[34m"

# include <iostream>
# include <string>
# include <stdlib.h>

class FragTrap
{
	std::string			name;
	unsigned int		HP;
	unsigned int		HP_max;
	unsigned int		EP;
	unsigned int		EP_max;
	unsigned int		lvl;
	unsigned int		atc_melee;
	unsigned int		atc_ranged;
	unsigned int		reduc_armor;

public:
	FragTrap();
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(const FragTrap &copy);
	FragTrap &operator=(const FragTrap &copy);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amout);
	void beRepaired(unsigned int amout);
	void vaulthunter_dot_exe(std::string const & target);
};

#endif
