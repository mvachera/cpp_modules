/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 21:25:56 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/21 19:28:32 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

Character::Character() : name("no_name")
{
	for (int i = 0; i < 4; ++i)
		inventory[i] = NULL;
}

Character::Character(std::string const &name) : name(name)
{
	for (int i = 0; i < 4; ++i)
		inventory[i] = NULL;
}

Character::Character(const Character& other)
{
	*this = other;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] != NULL)
			delete inventory[i];
		inventory[i] = NULL;
	}
}

Character&	Character::operator=(const Character& other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (inventory[i] != NULL)
				delete inventory[i];
		}
		name = other.name;
		for (int i = 0; i < 4; ++i)
		{
			if (other.inventory[i] != NULL)
				inventory[i] = other.inventory[i]->clone();
			else
				inventory[i] = NULL;
		}
	}

	return (*this);
}

std::string const &Character::getName() const
{
	return (name);
}

void	Character::equip(AMateria* m)
{
	if (!m)
	{
		std::cout << "Cannot equip non-Ice or non-Cure materia." << std::endl;
        return;
	}
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] == NULL)
		{
			if (dynamic_cast<Ice*>(m) || dynamic_cast<Cure*>(m))
			{
				inventory[i] = m->clone();
	 			return ;
			}
		}
	}
	std::cout << "Inventory full for " << name << "." << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		if (inventory[idx] != NULL)
			delete inventory[idx];
		inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && inventory[idx] != NULL)
		inventory[idx]->use(target);
}
