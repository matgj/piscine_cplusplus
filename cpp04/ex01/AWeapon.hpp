/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 17:26:54 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/11 17:59:52 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon
{
	protected:
		std::string	name;
		int			apCost;
		int			damage;

	public:
    	AWeapon();
		AWeapon(std::string const &name, int apcost, int damage);
		AWeapon(const AWeapon &copy);
		virtual ~AWeapon();

		AWeapon &operator=(const AWeapon &copy);

		virtual std::string getName() const;
		int					getAPCost() const;
		int					getDamage() const;
		virtual void		attack() const = 0;
};

#endif
