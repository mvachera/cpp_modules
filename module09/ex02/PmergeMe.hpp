/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:31:55 by mvachera          #+#    #+#             */
/*   Updated: 2024/02/14 20:28:12 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <string>
# include <iostream>
# include <algorithm>
# include <math.h>
# include <limits.h>
# include <string.h>
# include <ctime>
# include <vector>
# include <deque>

typedef std::vector<int>::iterator vecIt;
typedef std::deque<int>::iterator dequeIt;

class PmergeMe
{
	public:
		PmergeMe(char **av);
		~PmergeMe();

		void	algoVector(char **av);
		void	algoDeque(char **av);
		void	vecMerge(vecIt begin, vecIt end);
		void	dequeMerge(dequeIt begin, dequeIt end);
	private:
		PmergeMe();
		PmergeMe(const PmergeMe &other);
		PmergeMe&	operator=(const PmergeMe &other);
		std::vector<int> vecContainer;
		std::deque<int> dequeContainer;
		std::clock_t	vecBegin;
		std::clock_t	dequeBegin;
		std::clock_t	vecEnd;
		std::clock_t	dequeEnd;
};

void	parsing(char **av);

template <typename T>
void	display(const T &container, bool before);

# endif
