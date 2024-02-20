/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:25:12 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/16 19:00:19 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const std::string& type);
		Cure(const Cure& other);
		~Cure();

		Cure&	operator=(const Cure& other);

		virtual AMateria	*clone() const;
		virtual void	use(ICharacter &target);
};

#endif
