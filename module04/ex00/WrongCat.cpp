/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:58:07 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/17 19:31:58 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat& other)
{
    *this = other;
    std::cout << "WrongCat copy constructor called." << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called." << std::endl;
}

WrongCat&   WrongCat::operator=(const WrongCat& other)
{
    std::cout << "WrongCat assignment operator called." << std::endl;
    this->type = other.type;

    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "WrongMeow! WrongMeow!" << std::endl;
}
