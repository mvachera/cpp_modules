/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:25:16 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/16 19:00:48 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const std::string& type) : AMateria(type) {}

Cure::Cure(const Cure& other)
{
	*this = other;
}

Cure::~Cure() {}

Cure&	Cure::operator=(const Cure& other)
{
	AMateria::operator=(other);

	return (*this);
}

AMateria	*Cure::clone() const
{
	Cure	*clone = new Cure(*this);

	return (clone);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
