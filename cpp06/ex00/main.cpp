/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 12:34:31 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/14 14:02:36 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <math.h>
#include <climits>
#include <iomanip>
#include <cstdlib>


void	convert(std::string str)
{
	char *endptr;
	double	value;
	int		impossible = 0;

	try
	{
		const char *c = str.c_str();
		value = std::strtod(c, &endptr);
	}
	catch(std::exception& e)
	{
		impossible = 1;
	}

	std::cout << "char: ";
	if (isinf(value) || isnan(value) || impossible || value < CHAR_MIN || value > CHAR_MAX)
		std::cout << "impossible" << std::endl;
	else if (std::isprint(static_cast<char>(value)))
		std::cout << "'" << static_cast<char>(value) << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;

	std::cout << "int: ";
	if (isinf(value) || isnan(value) || impossible || value < INT_MIN || value > INT_MAX)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(value) << std::endl;

	std::cout << "float: ";
	if (impossible)
		std::cout << "impossible" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;

	std::cout << "double: ";
	if (impossible){
		std::cout << "impossible" << std::endl;
	}
	else
		std::cout << value << std::endl;
}

int		main (int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "You should put a single value as argument bro, don't try to fuck this up" << std::endl;
		return (1);
	}
	convert(static_cast<std::string>(argv[1]));
	return (0);
}
