/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 18:13:16 by mvachera          #+#    #+#             */
/*   Updated: 2023/12/24 21:15:43 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

Contact::Contact()
{
	first_name = "";
	last_name = "";
	nickname = "";
	phone_number = "";
	darkest_secret = "";
}

std::string	Contact::getFirstName()	const
{
	return (first_name);
}

std::string	Contact::getLastName()	const
{
	return (last_name);
}

std::string	Contact::getNickname()	const
{
	return (nickname);
}

bool	Contact::estVide() const
{
	return (first_name.empty() && last_name.empty() && nickname.empty()
		&& phone_number.empty() && darkest_secret.empty());
}

void	Contact::afficherDetails()	const
{
	std::cout << "Contact first name: " << first_name << std::endl;
	std::cout << "Contact last name: " << last_name << std::endl;
	std::cout << "Contact nickname: " << nickname << std::endl;
	std::cout << "Contact phone number: " << phone_number << std::endl;
	std::cout << "Contact darkest secret: " << darkest_secret << std::endl;
}

void	Contact::getInformation()
{
	std::cout << "Entrez le prenom : ";
	std::cin >> first_name;
	std::cout << "Entrez le nom de famille : ";
	std::cin >> last_name;
	std::cout << "Entrez le surnom : ";
	std::cin >> nickname;
	std::cout << "Entrez le numero de telephone : ";
	std::cin >> phone_number;
	std::cout << "Entrez le secret le plus sombre : ";
	std::cin >> darkest_secret;
	std::cout << std::endl << "Contact ajoute avec succes." << std::endl;
}
