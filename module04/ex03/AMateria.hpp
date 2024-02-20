/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:11:51 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/15 20:07:19 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <iostream>
# include <string>

class ICharacter;

class AMateria
{
	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria& other);
		virtual ~AMateria();

		AMateria&	operator=(const AMateria& other);

		std::string const	&getType() const;

		virtual AMateria*	clone() const = 0;
		virtual void	use(ICharacter& target);
	protected:
		std::string	type;
};

#endif
