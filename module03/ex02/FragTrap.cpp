/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 21:41:13 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/12 19:06:25 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("", 100, 100, 30)
{
	std::cout << "FragTrap nommé " << name << " est né !" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap nommé " << name << " est né !" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
{
	*this = other;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap nommé " << name << " dit au revoir !" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& other)
{
	ClapTrap::operator=(other);

	return (*this);
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << name << " demande un high five positif !" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		std::cout << "FragTrap " << name << " attaque " << target << ", causant "
			<< attackDamage << " points de dégâts !" << std::endl;
		energyPoints--;
	}
	else
		std::cout << "FragTrap " << name << " ne peut pas attaquer. Plus de points de vie ou d'énergie." << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (hitPoints > 0)
	{
		hitPoints -= amount;
		std::cout << "FragTrap " << name << " subit " << amount << " points de dégâts !" << std::endl;
		if (hitPoints <= 0)
			std::cout << "FragTrap " << name << " est vaincu !" << std::endl;
	}
	else
		std::cout << "FragTrap " << name << " ne peut pas subir de dégâts. Plus de points de vie." << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		hitPoints += amount;
		std::cout << "FragTrap " << name << " est réparé de " << amount << " points de vie !" << std::endl;
		energyPoints--;
	}
	else
		std::cout << "FragTrap " << name << " ne peut pas être réparé. Plus de points de vie ou d'énergie." << std::endl;
}
