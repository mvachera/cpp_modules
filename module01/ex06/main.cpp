/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 17:23:53 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/05 20:51:43 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	searchLevel(std::string argLevel)
{
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (!levels[i].compare(argLevel))
			return (i);
	}
	return (-1);
}

int	main(int ac, char **av)
{
	if (ac != 2)
		return (std::cout << "Incorrects arguments!" << std::endl, 1);

	Harl	harl;
	switch (searchLevel(std::string(av[1])))
	{
		case 0 :
			harl.complain("DEBUG");
		case 1 :
			harl.complain("INFO");
		case 2 :
			harl.complain("WARNING");
		case 3 :
			harl.complain("ERROR");
			break ;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}

	return (0);
}
