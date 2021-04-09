/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 14:59:52 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/13 16:58:19 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"

# include <iostream>
# include <fstream>

class ShrubberyCreationForm : public Form
{
static std::string const Trees[];
//static std::string const Trees;

public:
  ShrubberyCreationForm(std::string target);
  ShrubberyCreationForm(const ShrubberyCreationForm &copy);
  virtual ~ShrubberyCreationForm();

  ShrubberyCreationForm &operator=(const ShrubberyCreationForm &copy);

  void doing() const;
};

#endif
