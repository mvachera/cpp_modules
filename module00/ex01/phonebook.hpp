/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 20:00:11 by mvachera          #+#    #+#             */
/*   Updated: 2023/12/24 17:08:01 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		void	ajouterContact();
		void	afficherContact();
	private:
		static const int	MAX_CONTACT = 8;
		Contact	contact[MAX_CONTACT];
		int	indexDuPlusAncien;
};

#endif
