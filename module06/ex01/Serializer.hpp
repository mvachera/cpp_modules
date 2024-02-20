/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 20:07:25 by mvachera          #+#    #+#             */
/*   Updated: 2024/02/01 18:41:49 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <cstring>
# include <climits>
# include <stdint.h>

typedef struct Data
{
	std::string	name;
	int			value;
}	Data;

class Serializer
{
	public:
		Serializer();
		Serializer(const Serializer& other);
		~Serializer();

		Serializer&	operator=(const Serializer& other);

		static uintptr_t	serialize(Data* ptr);
		static Data*	deserialize(uintptr_t raw);
};

#endif
