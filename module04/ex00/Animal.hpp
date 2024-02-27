/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:42:28 by mvachera          #+#    #+#             */
/*   Updated: 2024/02/27 13:17:24 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# pragma once
# include <iostream>

class Animal
{
	public:
		Animal();
		Animal(const std::string& type);
		Animal(const Animal& other);
		virtual ~Animal();

		Animal&	operator=(const Animal& other);

		virtual void	makeSound() const;
		const std::string	&getType() const;
	protected:
		std::string	type;
};

#endif
