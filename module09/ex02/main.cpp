/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:38:06 by mvachera          #+#    #+#             */
/*   Updated: 2024/02/14 17:14:53 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **av)
{
	if (ac > 2)
	{
		try {
			PmergeMe(av + 1);
		}
		catch (const std::exception &e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}
	}
	else
		std::cout << "Invalid numbers of arguments!" << std::endl;
	return (0);
}
