/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:46:56 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/14 20:41:13 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	this->brain = new Brain();
	std::cout << "Dog constructor called." << std::endl;
}

Dog::Dog(const std::string& type) : Animal(type)
{
	this->brain = new Brain();
	std::cout << "Dog constructor called." << std::endl;
}

Dog::Dog(const Dog& other)
{
	std::cout << "Dog copy constructor called." << std::endl;

	Animal::operator=(other);
	this->brain = new Brain(*other.brain);
}

Dog::~Dog()
{
	delete	brain;
    std::cout << "Dog destructor called." << std::endl;
}

Dog&	Dog::operator=(const Dog& other)
{
	std::cout << "Dog assignment operator called." << std::endl;

	Animal::operator=(other);
	delete brain;
	this->brain = new Brain(*other.brain);
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof! Woof!" << std::endl;
}

Brain*	Dog::getBrain()
{
	return (brain);
}
