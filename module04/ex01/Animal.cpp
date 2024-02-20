/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:42:31 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/14 19:28:06 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal constructor called." << std::endl;
}

Animal::Animal(const std::string& type) : type(type)
{
	std::cout << "Animal constructor called." << std::endl;
}

Animal::Animal(const Animal& other)
{
	*this = other;

	std::cout << "Animal copy constructor called." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
}

Animal&	Animal::operator=(const Animal& other)
{
	std::cout << "Animal assignment operator called." << std::endl;
	this->type = other.type;

	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "Generic animal sound" << std::endl;
}

const std::string	&Animal::getType() const
{
	return (type);
}
