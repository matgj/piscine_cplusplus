/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 10:40:29 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/12 11:22:58 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void)
{
	this->units = new ISpaceMarine*[0];
	this->current = 0;
}

Squad::Squad(Squad const &other)
{
	*this = other;
}

Squad::~Squad(void)
{
	for (int i = 0; i < this->current; i++)
		delete this->units[i];
	delete []this->units;
	this->units = 0;
}

Squad &Squad::operator=(Squad const &other)
{
	std::cout << "assigment operator" << std::endl;
	for (int i = 0; i < this->current; i++)
		delete this->units[i];
	delete []this->units;
	this->units = 0;
	this->current = 0;
	for (int i = 0; i < other.getCount(); i++)
		this->push(other.getUnit(i)->clone());
	return (*this);
}

int Squad::getCount(void) const
{
	return (this->current);
}

ISpaceMarine *Squad::getUnit(int n) const
{
	if (n < this->current)
		return (this->units[n]);
	return (NULL);
}

int Squad::push(ISpaceMarine *unit)
{
	if (unit == 0)
		return (0);
	for (int i = 0; i < this->current; i++)
	{
		if (this->units[i] == unit)
			return (0);
	}
	ISpaceMarine **tmp = new ISpaceMarine*[this->current + 1];
	for (int i = 0; i < this->current; i++)
		tmp[i] = this->units[i];
	tmp[this->current++] = unit;
	if (this->units != 0)
		delete []this->units;
	this->units = tmp;
	return (1);
}
