/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 20:19:07 by mvachera          #+#    #+#             */
/*   Updated: 2024/02/07 17:51:40 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <sstream>
# include <cstdlib>
# include <cstring>
# include <climits>
# include <stdlib.h>

class ScalarConverter
{
	public:
		ScalarConverter();
		ScalarConverter(const std::string& str);
		ScalarConverter(const ScalarConverter& other);
		~ScalarConverter();

		ScalarConverter& operator=(const ScalarConverter& other);

		static void	convert(const std::string& str);
};

void	print_special(const std::string& str);
bool	error_str(const std::string& str);
int		type(const std::string& str);
bool	isInt(const std::string& str);
bool	isChar(const std::string& str);
bool	isFloat(const std::string& str);
bool	isDouble(const std::string& str);
void	toChar(const std::string& str);
void	toInt(const std::string& str);
void	toFloat(const std::string& str);
void	toDouble(const std::string& str);

#endif
