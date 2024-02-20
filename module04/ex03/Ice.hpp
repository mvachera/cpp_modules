/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:12:31 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/16 19:00:15 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const std::string& type);
		Ice(const Ice& other);
		~Ice();

		Ice&	operator=(const Ice& other);

		virtual AMateria	*clone() const;
		virtual void	use(ICharacter &target);
};

#endif
