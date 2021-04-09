/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 09:08:59 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/17 13:44:34 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

void addNumber(Span &sp, int n)
{
	try
	{
		sp.addNumber(std::rand() % n);
	}
	catch (std::exception &e)
	{
		addNumber(sp, n);
	}
}

int main ()
{
	try {
	Span sp = Span(5);
//	std::cout << sp.shortestSpan() << std::endl;
//	std::cout << sp.longestSpan() << std::endl;
	sp.addNumber(5);
//	std::cout << sp.shortestSpan() << std::endl;
//	std::cout << sp.longestSpan() << std::endl;
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	sp.addNumber(11);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	Span span(11000);

	try {
	std::vector<int> test;
	for(int i = 0; i < 11000; i++)
	{
		test.push_back(i);
	}
	span.addRange(test.begin(), test.end());
	std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
	std::cout << "Longest span: " << span.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	int n = 11000;
	Span sp2 = Span(n);

	std::srand(time(0));
	for (int i = 0; i < n; i++)
		addNumber(sp2, n);
	std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp2.longestSpan() << std::endl;


}
