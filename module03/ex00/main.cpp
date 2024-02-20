/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 18:07:47 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/07 19:01:04 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap claptrap("CL4P-TP");
	claptrap.attack("Bandit");
	claptrap.takeDamage(5);
	claptrap.beRepaired(3);
	claptrap.attack("Boss");
	claptrap.takeDamage(15);

	return (0);
}
