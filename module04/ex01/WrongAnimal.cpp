/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:58:00 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/14 17:45:06 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "WrongAnimal constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    *this = other;
    std::cout << "WrongAnimal copy constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called." << std::endl;
}

WrongAnimal&    WrongAnimal::operator=(const WrongAnimal& other)
{
    this->type = other.type;

    return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "Generic wrong animal sound" << std::endl;
}

const std::string &WrongAnimal::getType() const
{
    return type;
}
