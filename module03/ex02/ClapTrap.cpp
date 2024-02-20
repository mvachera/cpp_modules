/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 18:08:11 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/12 18:59:10 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name(""), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap nommé " << name << " est né !" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap nommé " << name << " est né !" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
}

ClapTrap::ClapTrap(const std::string& name, unsigned int hp, unsigned int ep, unsigned int ad)
	: name(name), hitPoints(hp), energyPoints(ep), attackDamage(ad) {}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap nommé " << name << " dit au revoir !" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->attackDamage = other.attackDamage;
	this->energyPoints = other.energyPoints;

	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		std::cout << "ClapTrap " << name << " attaque " << target << ", causant "
			<< attackDamage << " points de dégâts !" << std::endl;
		energyPoints--;
	}
	else
		std::cout << "ClapTrap " << name << " ne peut pas attaquer. Plus de points de vie ou d'énergie." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints > 0)
	{
		hitPoints -= amount;
		std::cout << "ClapTrap " << name << " subit " << amount << " points de dégâts !" << std::endl;
		if (hitPoints <= 0)
			std::cout << "ClapTrap " << name << " est vaincu !" << std::endl;
	}
	else
		std::cout << "ClapTrap " << name << " ne peut pas subir de dégâts. Plus de points de vie." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		hitPoints += amount;
		std::cout << "ClapTrap " << name << " est réparé de " << amount << " points de vie !" << std::endl;
		energyPoints--;
	}
	else
		std::cout << "ClapTrap " << name << " ne peut pas être réparé. Plus de points de vie ou d'énergie." << std::endl;
}
