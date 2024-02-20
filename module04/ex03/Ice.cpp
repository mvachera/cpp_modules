/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:16:13 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/16 19:47:48 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const std::string& type) : AMateria(type) {}

Ice::Ice(const Ice& other)
{
	*this = other;
}

Ice::~Ice() {}

Ice&	Ice::operator=(const Ice& other)
{
	AMateria::operator=(other);

	return (*this);
}

AMateria	*Ice::clone() const
{
	Ice	*clone = new Ice(*this);

	return (clone);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
