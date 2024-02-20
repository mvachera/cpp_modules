/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 20:01:01 by mvachera          #+#    #+#             */
/*   Updated: 2024/02/01 18:46:38 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main()
{
	Data	myData;
	myData.name = "Joe";
	myData.value = 42;

	uintptr_t serializedPtr = Serializer::serialize(&myData);
	Data *deserializedPtr = Serializer::deserialize(serializedPtr);

	if (deserializedPtr == &myData)
		std::cout << "La sérialisation et la désérialisation fonctionnent correctement !" << std::endl;
	else
		std::cerr << "Erreur : Le pointeur désérialisé ne correspond pas à l'original." << std::endl;
}
