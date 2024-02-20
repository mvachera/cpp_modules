/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 21:48:53 by mvachera          #+#    #+#             */
/*   Updated: 2023/12/29 21:48:15 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string humanName);
		void	setWeapon(Weapon& newWeapon);
		void	attack() const;
	private:
		std::string	name;
		Weapon*		weaponPtr;
};

#endif
