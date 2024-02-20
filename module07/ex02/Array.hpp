/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 18:16:55 by mvachera          #+#    #+#             */
/*   Updated: 2024/02/06 21:42:56 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>

template<typename T>
class Array
{
	public:
		Array() : array(new T[0]), length(0) {}
		Array(unsigned int n) : array(new T[n]), length(n) {}
		Array(const Array& other) : array(new T[other.length]), length(other.length) {
			for (unsigned int i = 0; i < length; i++)
				array[i] = other.array[i];
		}
		~Array() {
			delete[] array;
		}

		Array&	operator=(const Array& other) {
			if (this != &other)
			{
				delete[] array;

				array = new T[other.length];
				length = other.length;

				for (unsigned int i = 0; i < length; i++)
					array[i] = other.array[i];

				return (*this);
			}
		}

		T &operator[](unsigned int index) {
			if (index >= length || index < 0)
				throw std::out_of_range("Index out of bounds");
			return (array[index]);
		}

		unsigned int	size() const {
			return (length);
		}
	private:
		T *array;
		unsigned int length;
};

#endif
