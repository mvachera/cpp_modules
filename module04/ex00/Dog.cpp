/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:46:56 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/17 19:29:08 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog constructor called." << std::endl;
}

Dog::Dog(const Dog& other)
{
	*this = other;
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called." << std::endl;
}

Dog&	Dog::operator=(const Dog& other)
{
	std::cout << "Dog assignment operator called." << std::endl;
	this->type = other.type;

	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof! Woof!" << std::endl;
}
