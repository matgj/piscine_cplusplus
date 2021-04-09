/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 10:37:33 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/11 12:40:54 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# define RESET "\x1B[0m"
# define BOLD "\x1B[1m"
# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define BLUE "\x1B[34m"
# include <iostream>
# include <string>

# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
public:
	SuperTrap();
	~SuperTrap();
	SuperTrap(std::string name);
	SuperTrap(const SuperTrap &copy);
	SuperTrap &operator=(const SuperTrap &copy);

	void	meleeAttack(std::string const &arget);
	void	rangedAttack(std::string const &target);
};

#endif
