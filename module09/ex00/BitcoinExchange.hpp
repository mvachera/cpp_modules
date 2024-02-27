/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:38:04 by mvachera          #+#    #+#             */
/*   Updated: 2024/02/27 13:18:09 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# pragma once
# include "iostream"
# include "vector"
# include "map"
# include "string"
# include <fstream>
# include <sstream>
# include <cstdlib>
# include <limits.h>

struct Date
{
	long	year;
	long	month;
	long	day;

	bool operator<(const Date& other) const
	{
		if (year < other.year)
			return (true);
		if (year > other.year)
			return (false);
		if (month < other.month)
			return (true);
		if (month > other.month)
			return (false);
		if (day < other.day)
			return (true);
		return (false);
	}

	bool operator==(const Date& other) const
	{
		if (year == other.year && month == other.month && day == other.day)
			return (true);
		return (false);
	}
};


class BitcoinExchange
{
	public:
		BitcoinExchange();
		BitcoinExchange(const std::string& filename);
		BitcoinExchange(const BitcoinExchange& other);
		~BitcoinExchange();

		BitcoinExchange& operator=(const BitcoinExchange& other);

		void	dataParsing();
		void	inputParsing(const std::string& filename);
		void	getLineData(const std::string& line);
		void	getLineInput(const std::string& line);
		void	getDate(const std::string& line, Date *date, int type);
		void	checkLine(const std::string& line);
		void	checkLine2(const std::string& line);
		void	checkDate(Date date);
	private:
		std::map<Date, double> bitcoinPrices;
};

#endif
