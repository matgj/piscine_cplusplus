/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 11:47:25 by Mathis            #+#    #+#             */
/*   Updated: 2020/10/31 12:28:59 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	int i;
	int j;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (i = 1; (av[i]); i++){
			for	(j = 0;(av[i][j]); j++){
				std::cout << (char)toupper(av[i][j]);
			}
		}
	}
	std::cout << std::endl;
	return (0);
}
