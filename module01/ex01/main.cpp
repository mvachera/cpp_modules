/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 19:48:00 by mvachera          #+#    #+#             */
/*   Updated: 2023/12/28 20:01:26 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie*	zombieHordeOnHeap = zombieHorde(5, "Clown");
	for (int i = 0; i < 5; i++)
		zombieHordeOnHeap[i].announce();
	delete[] zombieHordeOnHeap;

	return (0);
}
