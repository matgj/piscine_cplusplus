/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 15:20:54 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/13 16:02:06 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 45, 72)
{
  this->setTarget(target);
  srand(time(0));
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy)
{
  *this = copy;
}

RobotomyRequestForm  &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
  (void)copy;
  return (*this);
}

void RobotomyRequestForm::doing() const
{
  if (rand() % 2 == 0) {
    std::cout << "*rrrRRR bipbipbip rrrrrrrrrrrrrrrrrrr bim boom PAF bip bip*" << std::endl;
    std::cout << this->getTarget() << " has been robotomized successfully bro!" << std::endl;
  }
  else
    std::cout << "has NOT been robotomized bro!" << std::endl;
}
