/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 18:07:47 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/07 20:17:28 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ClapTrap claptrap("CL4P-TP");
	claptrap.attack("Bandit");
	claptrap.takeDamage(5);
	claptrap.beRepaired(3);
	claptrap.attack("Boss");
	claptrap.takeDamage(15);

	ScavTrap scavtrap("SC4V-TP");
    scavtrap.attack("Bandit");
    scavtrap.takeDamage(10);
    scavtrap.beRepaired(5);
    scavtrap.guardGate();

	return (0);
}
