/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:38:01 by mvachera          #+#    #+#             */
/*   Updated: 2024/02/15 17:02:21 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const std::string& filename)
{
	dataParsing();
	inputParsing(filename);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other)
{
	bitcoinPrices = other.bitcoinPrices;
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
	if (this != &other)
		bitcoinPrices = other.bitcoinPrices;

	return (*this);
}

void	BitcoinExchange::dataParsing()
{
	std::ifstream	file("data.csv");
	if (!file.is_open())
		throw std::runtime_error("Error: could not open csv file.");

	std::string	line;
	std::getline(file, line);
	try {
		while (std::getline(file, line))
			getLineData(line);
	}
	catch (const std::exception &e) {
		file.close();
		std::cout << e.what();
		throw std::runtime_error("");
	}
	file.close();
}

void	BitcoinExchange::inputParsing(const std::string& filename)
{
	std::ifstream input(filename.c_str());

	if (!input.is_open())
		throw std::runtime_error("Error: could not open input file.");

	std::string		line;
	std::getline(input, line);
	if (line != "date | value")
	{
		input.close();
		throw std::runtime_error("Error: wrong file format of input.");
	}
	while (std::getline(input, line))
		getLineInput(line);

	input.close();
}

void	BitcoinExchange::checkLine(const std::string& line)
{
	int i = 0;

	for (i = 0; i < 4; i++)
	{
		if (!std::isdigit(line[i]))
			throw std::string("bad input.");
	}
	if (line[4] != '-')
		throw std::string("bad input.");
	if (!std::isdigit(line[5]) || !std::isdigit(line[6]))
		throw std::string("bad input.");
	if (line[7] != '-')
		throw std::string("bad input.");
	if (!std::isdigit(line[8]) || !std::isdigit(line[9]))
		throw std::string("bad input.");
}

void	BitcoinExchange::checkLine2(const std::string& line)
{
	int i = 0;
	int point = 0;

	if (line[line.size() - 1] == '.')
		throw std::runtime_error("bad input.");
	if (line[10] != ' ' || line[11] != '|' || line[12] != ' ')
		throw std::runtime_error("bad input.");
	if (!std::isdigit(line[13]) && line[13] != '+' && line[13] != '-')
		throw std::runtime_error("bad input.");
	for (i = 14; line[i]; i++)
	{
		if (!std::isdigit(line[i]) && line[i] != '.')
			throw std::runtime_error("bad input.");
		if (line[i] == '.')
			point++;
		if (point > 1)
			throw std::runtime_error("bad input.");
	}
}

void	BitcoinExchange::checkDate(Date date)
{
		if (date.year < 2009 || date.year > 2022)
			throw std::runtime_error("bad input => ");
		if (date.month < 1 || date.month > 12)
			throw std::runtime_error("bad input => ");
		if (date.day < 1)
			throw std::runtime_error("bad input => ");
		if (date.month % 2 == 1 && date.day > 31)
			throw std::runtime_error("bad input => ");
		if (date.month % 2 == 1 && date.day > 30)
			throw std::runtime_error("bad input => ");
		if (date.month == 2 && date.day > 29)
			throw std::runtime_error("bad input => ");
		if (date.year % 4 != 0 && date.month == 2 && date.day > 28)
			throw std::runtime_error("bad input => ");
		if (date.year == 2009 && date.month == 1 && date.day < 2)
			throw std::runtime_error("bad input => ");
		if (date.year == 2022 && date.month > 3)
			throw std::runtime_error("bad input => ");
}

void	BitcoinExchange::getLineData(const std::string& line)
{
	Date	date;
	std::string	data[2];

	getDate(line, &date, 0);

	std::stringstream	lf(line);
	std::getline(lf, data[0], ',');
	std::getline(lf, data[1]);

	double value = std::atof(data[1].c_str());

	bitcoinPrices.insert(std::make_pair(date, value));
}

void	BitcoinExchange::getLineInput(const std::string& line)
{
	Date	date;
	std::string	data[3];

	try {
		checkLine(line);
		getDate(line, &date, 1);
		checkDate(date);
		checkLine2(line);

		std::stringstream	lf(line);
		std::getline(lf, data[0], ' ');
		std::getline(lf, data[1], ' ');
		std::getline(lf, data[2]);

		double value = std::atof(data[2].c_str());

		if (value < 0)
			throw std::string("not a positive number.");
		if (static_cast<long>(value) < static_cast<long>(INT_MIN) || static_cast<long>(value) > static_cast<long>(INT_MAX))
			throw std::string("too large a number.");

		std::cout << date.year << "-";
		if (date.month < 10)
			std::cout << "0";
		std::cout << date.month << "-";
		if (date.day < 10)
			std::cout << "0";

		if (bitcoinPrices.find(date) != bitcoinPrices.end())
			std::cout << date.day << " => " << value << " = " << value * bitcoinPrices.find(date)->second << std::endl;
		else
		{
			std::map<Date, double>::iterator it = bitcoinPrices.upper_bound(date);
			it--;
			std::cout << date.day << " => " << value << " = " << value * it->second << std::endl;
		}
	}
	catch (const std::string &e) {
		std::cout << "Error: " << e << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << "Error: " << e.what() << date.year << "-" << date.month << "-" << date.day << std::endl;
	}
}

void	BitcoinExchange::getDate(const std::string& line, Date *date, int type)
{
	std::string	data[3];

	std::stringstream	lf(line);

	std::getline(lf, data[0], '-');
	std::getline(lf, data[1], '-');
	if (type == 0)
		std::getline(lf, data[2], ',');
	else
		std::getline(lf, data[2], ' ');

	date->year = std::atol(data[0].c_str());
	date->month = std::atol(data[1].c_str());
	date->day = std::atol(data[2].c_str());
}
