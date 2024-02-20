/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 19:43:49 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/12 20:52:09 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("", 100, 50, 20)
{
	std::cout << "ScavTrap nommé " << name << " est né !" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap nommé " << name << " est né !" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
	*this = other;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap nommé " << name << " dit au revoir !" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	ClapTrap::operator=(other);

	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " est maintenant en mode gardien de porte !" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		std::cout << "ScavTrap " << name << " attaque " << target << ", causant "
			<< attackDamage << " points de dégâts !" << std::endl;
		energyPoints--;
	}
	else
		std::cout << "ScavTrap " << name << " ne peut pas attaquer. Plus de points de vie ou d'énergie." << std::endl;
}
