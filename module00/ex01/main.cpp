/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 22:03:17 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/09 20:37:33 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		PhoneBook	repertoire;
		while (!std::cin.eof())
		{
			std::cout << "Menu:" << std::endl;
			std::cout << "1. Ajouter un contact: ADD" << std::endl;
			std::cout << "2. Afficher les contacts: SEARCH" << std::endl;
			std::cout << "3. Quitter: EXIT" << std::endl;
			std::cout << std::endl;
			std::cout << "Choisissez une option: ";
			std::string	choice;
			std::cin >> choice;

			std::cout << std::endl;
			if (choice == "ADD" || choice == "add" || choice == "1")
				repertoire.ajouterContact();
			else if (choice == "SEARCH" || choice == "search" || choice == "2")
				repertoire.afficherContact();
			else if (choice == "EXIT" || choice == "exit" || choice == "3")
				break ;
			else
				std::cout << "Commande invalide. Veuillez reessayer." << std::endl;
			std::cout << std::endl;
		}
	}
	else
		std::cout << "Nombre d'arguments invalide." << std::endl;
	return (0);
}
