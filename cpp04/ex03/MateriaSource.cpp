/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 14:24:27 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/12 14:43:59 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	num = 0;
  for (int i = 0; i < maxMateria; i++) {
    materias[i] = NULL;
  }
}

MateriaSource::~MateriaSource()
{
  for (int i = 0; i < num; i++) {
    delete materias[i];
  }
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
  for (int i = 0; i < maxMateria; i++) {
    materias[i] = NULL;
  }
	*this = copy;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &copy)
{
	for (int i = 0; i < num; i++) {
    delete materias[i];
    materias[i] = NULL;
  }
  num = 0;
  for (int i = 0; i < copy.num; i++) {
    learnMateria(copy.materias[i]->clone());
  }
	return (*this);
}

void			MateriaSource::learnMateria(AMateria *m)
{
  if (num >= maxMateria || m == NULL)
    return;
	this->materias[num] = m;
	num++;
}

AMateria		*MateriaSource::createMateria(std::string const &type)
{
	int		i = 0;

	while (i < num)
	{
		if (materias[i]->getType() == type)
			return materias[i]->clone();
		i++;
	}
	return 0;
}

