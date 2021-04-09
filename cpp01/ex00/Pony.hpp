/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 11:36:23 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/06 10:29:41 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP
# define RESET "\x1B[0m"
# define BOLD "\x1B[1m"
# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define BLUE "\x1B[34m"

# include <iostream>
# include <string>
# include <unistd.h>

class Pony
{
public:
	std::string name;
	std::string gender;
	Pony();
	void drink();
	void fuck();
	void rap();
	~Pony();
};

#endif
