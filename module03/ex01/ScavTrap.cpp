/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 19:43:49 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/12 18:56:41 by mvachera         ###   ########.fr       */
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

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (hitPoints > 0)
	{
		hitPoints -= amount;
		std::cout << "ScavTrap " << name << " subit " << amount << " points de dégâts !" << std::endl;
		if (hitPoints <= 0)
			std::cout << "ScavTrap " << name << " est vaincu !" << std::endl;
	}
	else
		std::cout << "ScavTrap " << name << " ne peut pas subir de dégâts. Plus de points de vie." << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		hitPoints += amount;
		std::cout << "ScavTrap " << name << " est réparé de " << amount << " points de vie !" << std::endl;
		energyPoints--;
	}
	else
		std::cout << "ScavTrap " << name << " ne peut pas être réparé. Plus de points de vie ou d'énergie." << std::endl;
}
