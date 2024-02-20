/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:25:17 by mvachera          #+#    #+#             */
/*   Updated: 2023/12/28 19:44:58 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie*	zombieOnHeap = newZombie("Foo");
	zombieOnHeap->announce();
	delete zombieOnHeap;

	randomChump("Bar");

	return (0);
}
