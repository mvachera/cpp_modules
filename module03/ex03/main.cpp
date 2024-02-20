/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 18:07:47 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/12 21:05:58 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap diamondTrap("DI4M-TP");
	DiamondTrap diamond(diamondTrap);
    
    diamondTrap.attack("Ennemi");
    diamondTrap.takeDamage(20);
    diamondTrap.beRepaired(10);
    diamondTrap.highFivesGuys();
    diamondTrap.guardGate();
    diamondTrap.whoAmI();

	return (0);
}
