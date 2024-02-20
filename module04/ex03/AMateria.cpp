/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:11:54 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/15 20:10:29 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("no_name") {}

AMateria::AMateria(std::string const &type) : type(type) {}

AMateria::AMateria(const AMateria& other)
{
	*this = other;
}

AMateria::~AMateria() {}

AMateria&	AMateria::operator=(const AMateria& other)
{
	type = other.type;

	return (*this);
}

std::string const	&AMateria::getType() const
{
	return (type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "* uses materia on " << target.getName() << " *" << std::endl;
}
