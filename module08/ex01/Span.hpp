/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:12:54 by mvachera          #+#    #+#             */
/*   Updated: 2024/02/05 20:47:12 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
	public:
		Span();
		Span(unsigned int N);
		Span(const Span& other);
		~Span();

		Span&	operator=(const Span& other);

		void	addNumber(int num);
		int		shortestSpan();
		int		longestSpan();
		void	addNumbers();
		void	addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	private:
		unsigned int N;
		std::vector<int> numbers;
};

#endif
