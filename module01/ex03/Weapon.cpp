/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 21:49:01 by mvachera          #+#    #+#             */
/*   Updated: 2023/12/29 21:21:56 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : type("Undefined") {}

Weapon::Weapon(const std::string& weaponType) : type(weaponType) {}

const std::string&	Weapon::getType() const
{
	return (type);
}

void	Weapon::setType(std::string newType)
{
	type = newType;
}
