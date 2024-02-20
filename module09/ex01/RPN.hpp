/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 09:02:43 by mvachera          #+#    #+#             */
/*   Updated: 2024/02/10 09:52:34 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <string>
# include <iostream>
# include <algorithm>
# include <math.h>
# include <string.h>
# include <stack>

class RPN
{
	public:
		RPN();
		RPN(const std::string& arg);
		RPN(const RPN& other);
		~RPN();

		RPN&	operator=(const RPN& other);

		void	parsing();
		void	calculate();
	private:
		std::string	_expression;
		std::stack<int>	_numbers;
};

#endif
