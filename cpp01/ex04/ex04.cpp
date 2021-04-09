/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 15:59:34 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/06 10:31:27 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int		main(void)
{
	std::string		str("HI THIS IS BRAIN");
	std::string		*str_ptr = &str;
	std::string		&str_ref = str;

	std::cout << "Using pointer : " << *str_ptr << std::endl;
	std::cout << "Using reference : " << str_ref << std::endl;
}
