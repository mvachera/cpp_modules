/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 20:11:51 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/14 17:44:33 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called." << std::endl;
}

Brain::Brain(const Brain& other)
{
    std::cout << "Brain copy constructor called." << std::endl;

    for (int i = 0; i < 100 ;++i)
        ideas[i] = other.ideas[i];
}

Brain&  Brain::operator=(const Brain& other)
{
    std::cout << "Brain assignment operator called." << std::endl;

    if (this != &other)
    {
        for (int i = 0; i < 100; ++i)
            ideas[i] = other.ideas[i];
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor called." << std::endl;
}

void    Brain::setIdea(int index, const std::string& idea)
{
    ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
    return (ideas[index]);
}
