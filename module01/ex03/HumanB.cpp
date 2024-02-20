/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 21:48:50 by mvachera          #+#    #+#             */
/*   Updated: 2023/12/29 21:48:43 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string humanName) : name(humanName), weaponPtr(nullptr) {}

void	HumanB::setWeapon(Weapon& newWeapon)
{
	weaponPtr = &newWeapon;
}

void	HumanB::attack() const
{
	if (weaponPtr != nullptr)
		std::cout << name << " attacks with their " << weaponPtr->getType() << std::endl;
	else
		std::cout << name << " attacks with bare hands!" << std::endl;
}
