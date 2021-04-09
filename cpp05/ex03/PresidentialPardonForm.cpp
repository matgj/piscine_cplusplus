/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 15:24:46 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/13 17:57:19 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 5, 25)
{
    this->setTarget(target);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form(copy)
{
  *this = copy;
}

PresidentialPardonForm  &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
  (void)copy;
  return (*this);
}

void PresidentialPardonForm::doing() const
{
  std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

Form *PresidentialPardonForm::create(std::string target)
{
	return (new PresidentialPardonForm(target));
}
