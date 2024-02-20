/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:38:06 by mvachera          #+#    #+#             */
/*   Updated: 2024/02/10 04:56:10 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		try {
			BitcoinExchange	btc(av[1]);
		}
		catch (const std::exception& e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}
	}
	else
		std::cout << "Invalid arguments." << std::endl;
	return (0);
}
