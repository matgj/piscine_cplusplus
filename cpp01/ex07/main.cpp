/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 13:47:52 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/06 12:40:22 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "File.hpp"

int		main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << RED << "We should have 4 arguments bro. Something like : ./a.out filename s1 s2" << RESET << std::endl;
		return (1);
	}
	File	input(argv[1]);

	try
	{
		input.parse(argv[2], argv[3]);
	}
	catch(char const *err)
	{
		std::cerr << RED << "We catch an error during the replacement, look how beautiful is it: " << err << RESET << std::endl;
		return (1);
	}
	return (0);
}
