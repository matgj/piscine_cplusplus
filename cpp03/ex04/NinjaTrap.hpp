/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 09:33:24 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/11 12:36:08 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# define RESET "\x1B[0m"
# define BOLD "\x1B[1m"
# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define BLUE "\x1B[34m"

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>
# include <string>

class NinjaTrap : virtual public ClapTrap
{
public:
	NinjaTrap();
	NinjaTrap(std::string name);
	~NinjaTrap();
	NinjaTrap(const NinjaTrap &copy);
	NinjaTrap &operator=(const NinjaTrap &copy);

	void ninjaShoebox(ClapTrap &target);
	void ninjaShoebox(FragTrap &target);
	void ninjaShoebox(ScavTrap &target);
	void ninjaShoebox(NinjaTrap &target);
	std::string getName();
};

#endif
