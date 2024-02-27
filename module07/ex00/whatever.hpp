/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:44:44 by mvachera          #+#    #+#             */
/*   Updated: 2024/02/27 13:17:56 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# pragma once
# include <iostream>

template<typename T>
void	swap(T &a, T &b)
{
	T	temp = a;
	a = b;
	b = temp;
}

template<typename T>
T	min(const T &a, const T &b)
{
	return ((a < b) ? a : b);
}

template<typename T>
T	max(const T &a, const T &b)
{
	return ((a > b) ? a : b);
}

#endif
