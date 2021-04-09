/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 13:09:23 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/06 08:15:59 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iomanip>
#include <string>
#include <iostream>
#include <cctype>

# define RESET "\x1B[0m"
# define BOLD "\x1B[1m"
# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define BLUE "\x1B[34m"

class Contact{
	std::string 	firstname;
	std::string 	lastname;
	std::string 	nickname;
	std::string 	login;
	std::string		postal;
	std::string 	email;
	std::string		phone;
	std::string 	birthday;
	std::string		meal;
	std::string 	color;
	std::string 	secret;

	public:
		Contact();
		~Contact();
		int		index;
		void	fill(int index);
		void	print_small();
		void	print_all();
};

#endif
