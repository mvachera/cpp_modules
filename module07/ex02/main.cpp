/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:38:34 by mvachera          #+#    #+#             */
/*   Updated: 2024/02/07 16:59:32 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main()
{
	try {
		Array<std::string> emptyArray;
		std::cout << "Empty Array size: " << emptyArray.size() << std::endl;

		Array<double> newArray(5);
		std::cout << "New Array size: " << newArray.size() << std::endl;

		for (unsigned int i = 0; i < newArray.size(); i++)
		{
			newArray[i] = i * 1.5;
			std::cout << "Element " << i << ": " << newArray[i] << std::endl;
		}

		Array<double> copiedArray = newArray;
		copiedArray[0] = 99.9;

		std::cout << "Copied Array size: " << copiedArray.size() << std::endl;
		std::cout << "Original Array element 0: " << newArray[0] << std::endl;
		std::cout << "Copied Array element 0: " << copiedArray[0] << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return (0);
}