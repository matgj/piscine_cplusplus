/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 18:40:21 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/10 12:30:36 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void) {

	Fixed x(10);
	Fixed y(0.3333f);

	std::cout << (x > y) << std::endl;
  	std::cout << (x < y) << std::endl;
	std::cout << (x == y) << std::endl;
  	std::cout << (x != y) << std::endl;
  	std::cout << x + y << std::endl;
	std::cout << x - y << std::endl;
	std::cout << x * y << std::endl;
  	std::cout << y / x << std::endl;
		
	std::cout << "Subject test" << std::endl; 		
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	 std::cout << a << std::endl;
	 std::cout << ++a << std::endl;
	 std::cout << a << std::endl;
	 std::cout << a++ << std::endl;
	 std::cout << a << std::endl;
	 std::cout << b << std::endl;
	 std::cout << Fixed::max(a, b) << std::endl;

	return 0;
}
