/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 09:08:57 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/17 10:58:49 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>

template <class T> int easyfind(T &int_container, int to_find)
{
	std::vector<int>::iterator it;

	it = find(int_container.begin(), int_container.end(), to_find);
	if (it != int_container.end())
		return (*it);
	else
		throw std::exception();
}

#endif

