/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:31:52 by mvachera          #+#    #+#             */
/*   Updated: 2024/02/14 20:49:43 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(char **av)
{
	std::vector<int> tmpContainer;

	parsing(av);
	for (int i = 0; av[i]; i++)
		tmpContainer.push_back(atoi(av[i]));
	display(tmpContainer, true);
	algoVector(av);
	algoDeque(av);
	display(vecContainer, false);
	std::cout << "Time to process a range of " << vecContainer.size() << " elements with std::vector :  " << vecEnd - vecBegin << " us" << std::endl;
	std::cout << "Time to process a range of " << dequeContainer.size() << " elements with std::deque :  " << dequeEnd - dequeBegin << " us" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &other)
{
	*this = other;
}

PmergeMe::~PmergeMe() {}

PmergeMe&	PmergeMe::operator=(const PmergeMe &other)
{
	if (this != &other)
	{
		vecContainer = other.vecContainer;
		dequeContainer = other.dequeContainer;
		vecBegin = other.vecBegin;
		dequeBegin = other.dequeBegin;
		vecEnd = other.vecEnd;
		dequeEnd = other.dequeEnd;
	}

	return (*this);
}

void	parsing(char **av)
{
	long	nb;
	int		i;
	int		j;

	for (i = 0; av[i]; i++)
	{
		nb = atol(av[i]);
		if (nb < 0)
			throw std::invalid_argument("negative value found.");
		if (strcmp(av[i], "0") && nb == 0)
			throw std::invalid_argument("incorrect value found.");
		if (nb < static_cast<long>(INT_MIN) || nb > static_cast<long>(INT_MAX))
			throw std::invalid_argument("value not in the sacle of integer found.");
	}
	for (i = 0; av[i]; i++)
	{
		nb = atol(av[i]);
		for (j = i + 1; av[i]; j++)
		{
			if (!av[j])
				break ;
			if (nb == atol(av[j]))
				throw std::invalid_argument("value found two times.");
		}
	}
}

template <typename T>
void	display(const T &container, bool before)
{
	unsigned int i;

	before ? std::cout << "Before:  " : std::cout << "After:  ";

	for (i = 0; i < container.size() - 1; i++)
		std::cout << container[i] << " ";
	std::cout << container[i] << std::endl;
}

void	PmergeMe::algoVector(char **av)
{
	vecBegin = std::clock();
	for (int i = 0; av[i]; i++)
		vecContainer.push_back(atoi(av[i]));
	vecMerge(vecContainer.begin(), vecContainer.end());
	vecEnd = std::clock();
}

void	PmergeMe::algoDeque(char **av)
{
	dequeBegin = std::clock();
	for (int i = 0; av[i]; i++)
		dequeContainer.push_back(atoi(av[i]));
	dequeMerge(dequeContainer.begin(), dequeContainer.end());
	dequeEnd = std::clock();
}

void	PmergeMe::vecMerge(vecIt begin, vecIt end)
{
	if (std::distance(begin, end) < 2)
		return ;
	vecIt	middle = begin;
	std::advance(middle, (std::distance(begin, end) / 2));
	vecMerge(begin, middle);
	vecMerge(middle, end);
	std::inplace_merge(begin, middle, end);
}

void	PmergeMe::dequeMerge(dequeIt begin, dequeIt end)
{
	if (std::distance(begin, end) < 2)
		return ;
	dequeIt	middle = begin;
	std::advance(middle, (std::distance(begin, end) / 2));
	dequeMerge(begin, middle);
	dequeMerge(middle, end);
	std::inplace_merge(begin, middle, end);
}
