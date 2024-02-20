/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 20:19:05 by mvachera          #+#    #+#             */
/*   Updated: 2024/02/07 17:54:27 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
	*this = other;
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
	(void)other;

	return (*this);
}

void	ScalarConverter::convert(const std::string& str)
{
	std::cout << "Original string: " << str << std::endl;

	if (str == "nanf" || str == "nan" || str == "inff" || str == "inf" || str == "+inff" || str == "+inf" || str == "-inff" || str == "-inf")
	{
		print_special(str);
		return ;
	}

	if (error_str(str))
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : impossible" << std::endl;
		std::cout << "double : impossible" << std::endl;
		return ;
	}

	switch(type(str)) {
		case 0:
			toInt(str);
			break ;
		case 1:
			toDouble(str);
			break ;
		case 2:
			toChar(str);
			break ;
		case 3:
			toFloat(str);
			break ;
		default:
			std::cout << "char : impossible" << std::endl;
			std::cout << "int : impossible" << std::endl;
			std::cout << "float : impossible" << std::endl;
			std::cout << "double : impossible" << std::endl;
	}
}

void	print_special(const std::string& str)
{
	if (str == "nanf" || str == "nan")
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : nanf" << std::endl;
		std::cout << "double : nan" << std::endl;
	}
	else if (str == "inff" || str == "inf")
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : inff" << std::endl;
		std::cout << "double : inf" << std::endl;
	}
	else if (str == "+inff" || str == "+inf")
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : +inff" << std::endl;
		std::cout << "double : +inf" << std::endl;
	}
	else if (str == "-inff" || str == "-inf")
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : -inff" << std::endl;
		std::cout << "double : -inf" << std::endl;
	}
}

bool	error_str(const std::string& str)
{
	int	nb_period = 0;
	if (str.size() > 1)
	{
		if (str.c_str()[0] != '-' && str.c_str()[0] != '+' && (str.c_str()[0] < '0' || str.c_str()[0] > '9'))
			return (true);
		if ((str.c_str()[1] == 'f' || str.c_str()[1] == '.') && (str.c_str()[0] == '-' || str.c_str()[0] == '+'))
			return (true);
		for (int i = 1; str.c_str()[i]; i++)
		{
			if (str.c_str()[i] == '.')
				nb_period++;
			if (nb_period > 1)
				return (true);
			if (str.c_str()[i] == 'f' && str.c_str()[i + 1])
				return (true);
			if (str.c_str()[i] != '.' && str.c_str()[i] != 'f'
				&& (str.c_str()[i] < '0' || str.c_str()[i] > '9'))
				return (true);
		}
	}
	return (false);
}

int	type(const std::string& str)
{
	if (isInt(str))
		return (0);
	if (isDouble(str))
		return (1);
	if (isChar(str))
		return (2);
	if (isFloat(str))
		return (3);
	return (3);
}

bool	isInt(const std::string& str)
{
	char	*end;
	long	nb = std::strtol(str.c_str(), &end, 10);

	(void)nb;
	if (*end == '\0')
		return (true);
	return (false);
}

bool	isChar(const std::string& str)
{
	if (str.size() == 1)
		return (true);
	return (false);
}

bool	isDouble(const std::string& str)
{
	char	*end;
	const char	*point = std::strchr(str.c_str(), '.');

	std::strtod(str.c_str(), &end);
	if (*end == '\0' && point != NULL)
		return (true);
	return (false);
}

bool	isFloat(const std::string& str)
{
	if (str[str.size() - 1] == 'f')
		return (true);
	return (false);
}

void	toChar(const std::string& str)
{
	char	c = str[0];
	int		i = static_cast<int>(c);
	float	f = static_cast<float>(c);
	double	d = static_cast<double>(c);

	if (std::isprint(c))
		std::cout << "char : '" << c << "'" << std::endl;
	else
		std::cout << "char : Non displayable" << std::endl;
	std::cout << "int : " << i << std::endl;
	std::cout << "float : " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	std::cout << "double : " << std::fixed << std::setprecision(1) << d << std::endl;
}

void	toInt(const std::string& str)
{
	double	i = std::atol(str.c_str());
	char	c = static_cast<char>(i);
	float	f = static_cast<float>(i);
	double	d = static_cast<double>(i);
	long long nb = static_cast<long long>(i);

	if (std::isprint(c))
		std::cout << "char : '" << c << "'" << std::endl;
	else
		std::cout << "char : Non displayable" << std::endl;
	if (nb < INT_MIN || nb > INT_MAX)
		std::cout << "int : out of range" << std::endl;
	else
		std::cout << "int : " << nb << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}

void	toFloat(const std::string& str)
{
	float	f = std::atof(str.c_str());
	char	c = static_cast<char>(f);
	long	i = static_cast<long>(f);
	double	d = static_cast<double>(f);

	if (std::isprint(c))
		std::cout << "char : '" << c << "'" << std::endl;
	else
		std::cout << "char : Non displayable" << std::endl;
	if (i < -2147483648 || i > 2147483647)
		std::cout << "int : out of range" << std::endl;
	else
		std::cout << "int : " << i << std::endl;
	std::cout << "float : " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	std::cout << "double : " << std::fixed << std::setprecision(1) << d << std::endl;
}

void	toDouble(const std::string& str)
{
	double	d = std::atof(str.c_str());
	char	c = static_cast<char>(d);
	long	i = static_cast<long>(d);
	float	f = static_cast<double>(d);

	if (std::isprint(c))
		std::cout << "char : '" << c << "'" << std::endl;
	else
		std::cout << "char : Non displayable" << std::endl;
	if (i < -2147483648 || i > 2147483647)
		std::cout << "int : out of range" << std::endl;
	else
		std::cout << "int : " << i << std::endl;
	std::cout << "float : " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	std::cout << "double : " << std::fixed << std::setprecision(1) << d << std::endl;
}
