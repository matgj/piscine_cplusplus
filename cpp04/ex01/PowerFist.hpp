/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 17:41:02 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/11 17:42:58 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		PowerFist();
		PowerFist(const PowerFist &copy);
		virtual ~PowerFist();

		PowerFist &operator=(const PowerFist &copy);

		void	attack() const;
};

#endif
