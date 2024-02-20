/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:42:24 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/17 19:44:09 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <vector>
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	Animal*	animals[10];

	animals[0] = new Dog("oeoe");
	for (int i = 1; i < 5; i++)
		animals[i] = new Dog();
	for (int i = 0; i < 5; i++)
		animals[5 + i] = new Cat();

    for (int i = 0; i < 100; i++)
        static_cast<Dog*>(animals[0])->getBrain()->setIdea(i, "New Idea");

    std::cout << "First animal's ideas after modification: ";
	std::cout << animals[0]->getType() << std::endl;
    for (int i = 0; i < 100; i++)
        std::cout << static_cast<Dog*>(animals[0])->getBrain()->getIdea(i) << ", ";
    std::cout << std::endl;
	
	*static_cast<Dog*>(animals[4]) = *static_cast<Dog*>(animals[0]);
	std::cout << "4th animal's ideas after copy operator called: ";
	std::cout << animals[4]->getType() << std::endl;
    for (int i = 0; i < 100; i++)
	{
        std::cout << static_cast<Dog*>(animals[4])->getBrain()->getIdea(i) << ", ";
	}
	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
	{
		animals[i]->makeSound();
		delete animals[i];
	}	

	return (0);
}