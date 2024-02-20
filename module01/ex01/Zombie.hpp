/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 19:55:06 by mvachera          #+#    #+#             */
/*   Updated: 2023/12/28 20:26:23 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <memory>

class Zombie
{
	public:
		Zombie();
		void	announce();
		void	setName(std::string const &str);
		~Zombie();
	private:
		std::string	name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif
