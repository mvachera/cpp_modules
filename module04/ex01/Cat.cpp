/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:46:53 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/14 20:41:32 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	this->brain = new Brain();
	std::cout << "Cat constructor called." << std::endl;
}

Cat::Cat(const std::string& type) : Animal(type)
{
	this->brain = new Brain();
	std::cout << "Cat constructor called." << std::endl;
}

Cat::Cat(const Cat& other)
{
	std::cout << "Cat copy constructor called." << std::endl;

	Animal::operator=(other);
	this->brain = new Brain(*other.brain);
}

Cat::~Cat()
{
	delete	brain;
    std::cout << "Cat destructor called." << std::endl;
}

Cat&	Cat::operator=(const Cat& other)
{
	std::cout << "Cat assignment operator called." << std::endl;

	Animal::operator=(other);
	delete	brain;
	this->brain = new Brain(*other.brain);
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meow! Meow!" << std::endl;
}

Brain*	Cat::getBrain()
{
	return (brain);
}
