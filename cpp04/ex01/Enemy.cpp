/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 18:10:08 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/11 18:28:41 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()
{
}

Enemy::Enemy(int hp, std::string const &type)
{
	this->hp = hp;
	this->type = type;
}

Enemy::~Enemy()
{
}

Enemy::Enemy(const Enemy &copy)
{
	*this = copy;
}

Enemy	&Enemy::operator=(const Enemy &copy)
{
	this->hp = copy.hp;
	this->type = copy.type;
	return (*this);
}

int		Enemy::getHP() const
{
	return hp;
}

std::string		Enemy::getType() const
{
	return type;
}

void	Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return ;
	if (hp - damage < 0)
		hp = 0;
	else
	 	hp = hp - damage;
}
