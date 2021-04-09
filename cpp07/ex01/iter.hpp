/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 14:16:18 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/15 14:54:00 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <typename T> void iter(T *tab, size_t size, void (*f)(T const &elem))
{
	for (unsigned int i = 0; i < size; i++)
	{
		f(tab[i]);
	}
}

