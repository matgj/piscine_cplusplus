/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 12:30:15 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/15 14:17:03 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void)
{
	// int a = 1;
	// int b = 2;
	// char c = 'c';
	// char d = 'd';
	// // int e = 1;
	// // int f = 1;

	// std::cout << "a: " << a << " b: " << b << std::endl;
	// swap(a,b);
	// std::cout << "a: " << a << " b: " << b << std::endl;
	// std::cout << "---------------" << std::endl;
	// std::cout << "c: " << c << " d: " << d << std::endl;
	// swap(c,d);
	// std::cout << "c: " << c << " d: " << d << std::endl;
	// std::cout << "-------min ---------------" << std::endl;
	// std::cout << min(a,b) << std::endl;
	// std::cout << min(c,d) << std::endl;

	// std::cout << "--------max---------------" << std::endl;
	// std::cout << max(a,b) << std::endl;
	// std::cout << max(c,d) << std::endl;

	int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << "------classe--------" << std::endl;
  	Awesome x(50);
  	Awesome y(10);
	std::cout << "x: " << x << " y: " << y << std::endl;
	swap(x,y);
	std::cout << "x: " << x << " y: " << y << std::endl;
	std::cout << "-------min ---------------" << std::endl;
	std::cout << min(x,y) << std::endl;

	std::cout << "--------mxx---------------" << std::endl;
	std::cout << max(x,y) << std::endl;
	return 0;
}
