/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 17:23:49 by mvachera          #+#    #+#             */
/*   Updated: 2023/12/30 21:09:54 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <functional>
# include <map>

class Harl
{
	public:
		Harl();
		void	complain(std::string level);
	private:
		typedef void	(Harl::* ptrFunc)();
		ptrFunc	harlComplainer[4];
		void	debug();
		void	info();
		void	warning();
		void	error();
};

#endif
