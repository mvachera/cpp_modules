/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:39:31 by mvachera          #+#    #+#             */
/*   Updated: 2024/02/05 19:24:40 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main()
{
	std::vector<int> numbers;
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_back(5);
	numbers.push_back(1);
	numbers.push_back(0);

	try {
		std::vector<int>::iterator result = easyfind(numbers, 3);
		std::cout << "Value found at position: " << std::distance(numbers.begin(), result) << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	try {
		std::vector<int>::iterator result = easyfind(numbers, 6);
		std::cout << "Value found at position: " << std::distance(numbers.begin(), result) << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return (0);
}
