/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 09:02:40 by mvachera          #+#    #+#             */
/*   Updated: 2024/02/10 11:28:24 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const std::string& arg) : _expression(arg)
{
	parsing();
	calculate();
}

RPN::RPN(const RPN& other)
{
	*this = other;
}

RPN::~RPN() {}

RPN&	RPN::operator=(const RPN& other)
{
	if (this != &other)
	{
		_expression = other._expression;
		_numbers = other._numbers;
	}

	return (*this);
}

void	RPN::parsing()
{
	int coutNumber = 0;
	int	countOperator = 0;

	for (int i = 0; _expression[i]; i++)
	{
		while (_expression[i] == ' ' || _expression[i] == '\t')
			i++;
		if (!std::isdigit(_expression[i]) && _expression[i] != '+' && _expression[i] != '-'
			&& _expression[i] != '*' && _expression[i] != '/')
			throw std::invalid_argument("Error");
		if (std::isdigit(_expression[i]))
			coutNumber++;
		if (strchr("+-/*", _expression[i]))
			countOperator++;
	}
	if (coutNumber - countOperator != 1 || (coutNumber > 0 && countOperator == 0))
		throw std::invalid_argument("Error");
}

void	RPN::calculate()
{
	for (int i = 0; _expression[i]; i++)
	{
		while (_expression[i] == ' ' || _expression[i] == '\t')
			i++;
		if (std::isdigit(_expression[i]))
		{
			if (_expression[i + 1] && std::isdigit(_expression[i + 1]))
				throw std::invalid_argument("Error");
			int nb = _expression[i] - '0';
			_numbers.push(nb);
		}
		else if (strchr("+-/*", _expression[i]))
		{
			if (_expression[i + 1] && strchr("+-/*", _expression[i + 1]))
				throw std::invalid_argument("Error");
			if (_numbers.size() < 2)
				throw std::invalid_argument("Error");
			int	nb1 = _numbers.top();
			_numbers.pop();
			int nb2 = _numbers.top();
			_numbers.pop();
			if (_expression[i] == '+')
				_numbers.push(nb2 + nb1);
			else if (_expression[i] == '-')
				_numbers.push(nb2 - nb1);
			else if (_expression[i] == '*')
				_numbers.push(nb2 * nb1);
			else if (_expression[i] == '/')
			{
				if (nb1 == 0)
					throw std::invalid_argument("Error");
				_numbers.push(nb2 / nb1);
			}
		}
	}
	if (_numbers.size() != 1)
		throw std::invalid_argument("Error");
	std::cout << _numbers.top() << std::endl;
}
