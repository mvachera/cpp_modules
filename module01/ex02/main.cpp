/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 20:42:38 by mvachera          #+#    #+#             */
/*   Updated: 2023/12/28 21:30:06 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*strPtr = &str;
	std::string	&strRef = str;

	std::cout << "Adresse de la string en mémoire : " << &str << std::endl;
	std::cout << "Adresse stockée dans stringPTR : " << strPtr << std::endl;
	std::cout << "Adresse stockée dans stringREF : " << &strRef << std::endl;

	std::cout << "Valeur de la string : " << str << std::endl;
	std::cout << "Valeur pointée par stringPTR : " << *strPtr << std::endl;
	std::cout << "Valeur pointée par stringREF : " << strRef << std::endl;

	return (0);
}