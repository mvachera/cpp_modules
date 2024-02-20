/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 18:07:47 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/08 18:31:07 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

	FragTrap fragtrap("FR4G-TP");
    fragtrap.attack("Enemy");
    fragtrap.takeDamage(15);
    fragtrap.beRepaired(8);
    fragtrap.highFivesGuys();

	return (0);
}
