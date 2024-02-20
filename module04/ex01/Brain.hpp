/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 20:11:54 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/14 17:24:43 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	public:
		Brain();
		Brain(const Brain& other);
		~Brain();

		Brain&	operator=(const Brain& other);

		void	setIdea(int index, const std::string& idea);
		std::string	getIdea(int index) const;
	private:
		std::string ideas[100];
};

#endif
