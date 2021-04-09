/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 14:24:35 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/17 15:04:54 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
std::cout << mstack.top() << std::endl;
mstack.pop();
std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
//[...]
mstack.push(0);
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}

MutantStack<int> s(mstack);

std::cout << "Size cpy: " <<  s.size() << std::endl;
	while (!s.empty())
	{
		it--;
		std::cout << *it << std::endl;
		s.pop();
	}
	std::cout << "Size: " << s.size() << std::endl;
	for (int i = 0; i < 10; i++)
		s.push(i * 10);
	it = s.begin();
	while (it != s.end())
		std::cout << *(it++) << std::endl;
	return (0);
}
