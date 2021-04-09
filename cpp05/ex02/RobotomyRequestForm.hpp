/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 15:20:48 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/13 15:24:16 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"

# include <iostream>
# include <ctime>
# include <cstdlib>


class RobotomyRequestForm : public Form {
 public:
  RobotomyRequestForm(std::string target);
  RobotomyRequestForm(const RobotomyRequestForm &copy);
  virtual ~RobotomyRequestForm();

  RobotomyRequestForm &operator=(const RobotomyRequestForm &copy);

  void doing() const;
};

#endif
