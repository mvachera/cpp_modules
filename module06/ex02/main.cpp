/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 20:35:46 by mvachera          #+#    #+#             */
/*   Updated: 2024/02/01 19:28:07 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>

Base*	generate()
{
	int randomValue = rand() % 3;
	std::cout << randomValue << std::endl;
	switch (randomValue)
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
		default:
			return (NULL);
	}
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown type" << std::endl;
}

void	identify(Base& p)
{
	try {
		A &a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void)a;
		return ;
	}
	catch (std::exception& e) {}
	try {
		B &b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		(void)b;
		return ;
	}
	catch (std::exception& e) {}
	try {
		C &c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		(void)c;
		return ;
	}
	catch (std::exception& e) {
		std::cout << "Unknown type." << std::endl;
	}
}

int	main()
{
	srand(time(NULL));
	Base*	instance = generate();

	std::cout << "Using identify(Base*): ";
	identify(instance);

	std::cout << "Using identify(Base&): ";
	identify(*instance);

	delete instance;

	return (0);
}
