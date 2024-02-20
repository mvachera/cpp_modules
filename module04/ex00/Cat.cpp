/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:46:53 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/17 19:28:36 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat constructor called." << std::endl;
}

Cat::Cat(const Cat& other)
{
	*this = other;
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called." << std::endl;
}

Cat&	Cat::operator=(const Cat& other)
{
	std::cout << "Cat assignment operator called." << std::endl;
	this->type = other.type;

	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meow! Meow!" << std::endl;
}
