/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 18:47:13 by mvachera          #+#    #+#             */
/*   Updated: 2024/02/27 13:17:10 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# pragma once
# include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed& other);
		~Fixed();

		Fixed& operator=(const Fixed& other);

		int	getRawBits() const;
		void	setRawBits(int const raw);
	private:
		int	value;
		static const int	fractionalBits = 8;
};

#endif
