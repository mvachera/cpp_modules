/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 21:41:13 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/12 20:52:18 by mvachera         ###   ########.fr       */
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
