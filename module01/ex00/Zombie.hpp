/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:36:39 by mvachera          #+#    #+#             */
/*   Updated: 2024/02/27 13:16:55 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# pragma once
# include <iostream>
# include <string>
# include <memory>

class Zombie
{
	public:
		Zombie(std::string zombieName);
		void	announce();
		~Zombie();
	private:
		std::string	name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
