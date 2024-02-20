/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 19:56:34 by mvachera          #+#    #+#             */
/*   Updated: 2023/12/31 18:01:25 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

void	replaceInFile(const std::string &filename, const std::string &s1, const std::string &s2)
{
	std::ifstream	inputFile(filename);
	if (!inputFile.is_open())
	{
		std::cerr << "Erreur : Impossible d'ouvrir le fichier " << filename << std::endl;
		return ;
	}
	std::string	outputFilename = filename + ".replace";
	std::ofstream	outputFile(outputFilename);
	if (!outputFile)
	{
		std::cerr << "Erreur : Impossible de créer le fichier de sortie " << outputFilename << std::endl;
		return ;
	}
	std::string	line;
	while (std::getline(inputFile, line))
	{
		size_t	pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
			pos += s2.length();
		}
		outputFile << line << std::endl;
	}
	inputFile.close();
	outputFile.close();
	std::cout << "Le remplacement a été effectué avec succès. Résultat dans le fichier " << outputFilename << std::endl;
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string	filename = av[1];
		std::string	s1 = av[2];
		std::string	s2 = av[3];

		replaceInFile(filename, s1, s2);
	}
	else
		std::cout << "Arguments incorrects!" << std::endl;
	return (0);
}
