/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:38:06 by mvachera          #+#    #+#             */
/*   Updated: 2024/02/10 11:28:31 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
		std::cout << "Invalid arguments." << std::endl;
	else
	{
		try {
			RPN	rpn(av[1]);
		}
		catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}
