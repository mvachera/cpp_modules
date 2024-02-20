/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:12:52 by mvachera          #+#    #+#             */
/*   Updated: 2024/02/05 21:40:12 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N(0) {}

Span::Span(unsigned int N) : N(N) {}

Span::Span(const Span& other)
{
	*this = other;
}

Span::~Span() {}

Span&	Span::operator=(const Span& other)
{
	if (this != &other)
	{
		N = other.N;
		numbers = other.numbers;
	}

	return (*this);
}

void	Span::addNumber(int num)
{
	if (numbers.size() < N)
		numbers.push_back(num);
	else
		throw std::runtime_error("Span is full. Cannot add more numbers.");
}

int	Span::shortestSpan()
{
	if (numbers.size() < 2)
		throw std::runtime_error("Not enough numbers to find span.");

	std::sort(numbers.begin(), numbers.end());
	int	minSpan = std::abs(numbers[1] - numbers[0]);

	for (size_t i = 2; i < numbers.size(); i++)
	{
		int	currentSpan = std::abs(numbers[i] - numbers[i - 1]);
		minSpan = std::min(minSpan, currentSpan);
	}

	return (minSpan);
}

int	Span::longestSpan()
{
	if (numbers.size() < 2)
		throw std::runtime_error("Not enough numbers to find span.");

	return (*std::max_element(numbers.begin(), numbers.end()) - *std::min_element(numbers.begin(), numbers.end()));
}

void	Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (std::distance(begin, end) > static_cast<int>(N - numbers.size()))
		throw std::runtime_error("Adding numbers exceeds Span capacity.");

	numbers.insert(numbers.end(), begin, end);
}
