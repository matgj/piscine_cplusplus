/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 12:38:47 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/06 10:31:20 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# define RESET "\x1B[0m"
# define BOLD "\x1B[1m"
# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define BLUE "\x1B[34m"

# include <iostream>
# include <string>

class Zombie
{
	std::string type;
	std::string name;

	public:
	Zombie();
	~Zombie();
	Zombie(std::string name);
	Zombie(std::string name, std::string type);

	void announce();
	void setName(std::string name);
	void setType(std::string type);
};

#endif
