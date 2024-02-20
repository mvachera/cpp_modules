/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 21:49:04 by mvachera          #+#    #+#             */
/*   Updated: 2023/12/29 21:22:22 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
	public:
		Weapon();
		Weapon(const std::string& weaponType);
		const std::string&	getType() const;
		void				setType(std::string newType);
	private:
		std::string	type;
};

#endif
