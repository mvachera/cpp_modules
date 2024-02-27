/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:39:18 by mvachera          #+#    #+#             */
/*   Updated: 2024/02/27 13:18:02 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define 	EASYFIND_HPP

# pragma once
# include <algorithm>
# include <iostream>
# include <vector>

template<typename T>
typename T::iterator easyfind(T &container, int value)
{
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	if (it != container.end())
		return (it);
	else
		throw std::out_of_range("Value not found in container");
}

#endif
