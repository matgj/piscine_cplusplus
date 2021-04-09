/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 15:25:44 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/13 15:25:59 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <iostream>

class PresidentialPardonForm : public Form {
 public:
  PresidentialPardonForm(std::string target);
  PresidentialPardonForm(const PresidentialPardonForm &copy);
  virtual ~PresidentialPardonForm();

  PresidentialPardonForm &operator=(const PresidentialPardonForm &copy);

  void doing() const;
};

#endif
