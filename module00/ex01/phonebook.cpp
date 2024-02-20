/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 18:22:54 by mvachera          #+#    #+#             */
/*   Updated: 2023/12/24 18:05:48 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	indexDuPlusAncien = 0;
}

void PhoneBook::ajouterContact()
{
	for (int i = 0; i < MAX_CONTACT; i++)
	{
		if (contact[i].estVide())
		{
			contact[i].getInformation();
			return ;
		}
	}
	std::cout << "Le repertoire est plein. Le contact le plus ancien sera remplacer."
		<< std::endl << std::endl;
	contact[indexDuPlusAncien].getInformation();
	if (indexDuPlusAncien == 7)
		indexDuPlusAncien = 0;
	else
		indexDuPlusAncien++;
}

std::string truncateString(const std::string& str, size_t length)
{
	if (str.length() > length)
		return (str.substr(0, length - 1) + ".");
	else
		return (str);
}

void PhoneBook::afficherContact()
{
	std::string	indiceStr;
	int			indice;

	std::cout << std::setw(10) << "Index" << " | "
		<< std::setw(10) << "Prenom" << " | "
		<< std::setw(10) << "Nom" << " | "
		<< std::setw(10) << "Surnom" << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
	for (int i = 0; i < MAX_CONTACT; i++)
		std::cout << std::setw(10) << i + 1 << " | "
			<< std::setw(10) << truncateString(contact[i].getFirstName(),
				10) << " | "
			<< std::setw(10) << truncateString(contact[i].getLastName(),
				10) << " | "
			<< std::setw(10) << truncateString(contact[i].getNickname(),
				10) << std::endl;
	std::cout << std::endl << "Entrez l'indice du contact a afficher: ";
	std::cin >> indiceStr;
	std::cout << std::endl;
	indice = std::atoi(indiceStr.c_str());
	if (indice >= 1 && indice <= MAX_CONTACT)
	{
		if (contact[indice - 1].estVide())
			std::cout << "Le contact est vide." << std::endl;
		else
			contact[indice - 1].afficherDetails();
	}
	else
		std::cout << "Indice invalide." << std::endl;
}
