/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 21:32:35 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/17 19:46:17 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		source[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	*this = other;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (source[i] != NULL)
			delete source[i];
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other)
	{
		this->~MateriaSource();

		for (int i = 0; i < 4; i++)
		{
			if (other.source[i] != NULL)
				source[i] = other.source[i]->clone();
			else
				source[i] = NULL;
		}
	}

	return (*this);
}

void	MateriaSource::learnMateria(AMateria* other)
{
	for (int i = 0; i < 4; i++)
	{
		if (source[i] == NULL)
		{
			source[i] = other->clone();
			delete other;
			return;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (source[i] != NULL && source[i]->getType() == type)
			return source[i]->clone();
	}

	return (NULL);
}
