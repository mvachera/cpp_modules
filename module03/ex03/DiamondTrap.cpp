/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:37:14 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/13 18:41:50 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

class ClapTrap;

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"), FragTrap("Default_clap_name"), ScavTrap("Default_clap_name")
{
	std::cout << "DiamondTrap nommé " << name << " est né !" << std::endl;
	name = "Default_name";
	hitPoints = this->FragTrap::hitPoints;
	attackDamage = this->FragTrap::attackDamage;
	energyPoints = this->ScavTrap::energyPoints;
}

DiamondTrap::DiamondTrap(const std::string& name)
	: ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap nommé " << name << " est né !" << std::endl;
	this->name = name;
	hitPoints = this->FragTrap::hitPoints;
	attackDamage = this->FragTrap::attackDamage;
	energyPoints = this->ScavTrap::energyPoints;
}

void DiamondTrap::print_nem( void )
{
	std::cout << name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
{
	*this = other;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other)
{
	ClapTrap::operator=(other);

	return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap nommé " << name << " dit au revoir !" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Je suis DiamondTrap, mon nom est " << name << " et mon nom de ClapTrap est " << ClapTrap::name << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}
