/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 14:14:39 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/12 14:40:09 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

Character::Character()
{
	for (int i = 0; i < maxInventorySize; i++)
		inventory[i] = NULL;
}

Character::Character(std::string name)
{
	for (int i = 0; i < maxInventorySize; i++)
		inventory[i] = NULL;
	this->name = name;
}

Character::~Character()
{
  for (int i = 0; i < maxInventorySize; i++) 
  {
    if (inventory[i]) 
	{
      delete inventory[i];
    }
  }
}

Character::Character(const Character &copy)
{
  for (int i = 0; i < maxInventorySize; i++)
		inventory[i] = NULL;
	*this = copy;
}

Character	&Character::operator=(const Character &copy)
{
	for (int i = 0; i < maxInventorySize; i++)
	{
   	 	if (inventory[i])
		{
   	   		delete inventory[i];
   	  		 inventory[i] = NULL;
   		}
  	}
  for (int i = 0; i < maxInventorySize; i++)
  {
   	 if (copy.inventory[i])
      	equip(copy.inventory[i]->clone());
  }
  name = copy.name;
	return (*this);
}

std::string const	&Character::getName() const
{
	return name;
}

void Character::equip(AMateria *m)
{
  for (int i = 0; i < maxInventorySize; i++)
		if (inventory[i] == m)
			return ;
	for (int i = 0; i < maxInventorySize; i++)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= maxInventorySize || !inventory[idx])
		return ;
	this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= maxInventorySize || !inventory[idx])
		return ;
	this->inventory[idx]->use(target);
}
