/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:18:33 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/12 21:14:10 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void)
{
	Point a(3, 1);
	Point b(3, 4);
	Point c(-2, 1);

	Point testPoint(2, 2);

	bool result = bsp(a, b, c, testPoint);

	if (result)
		std::cout << "Le point est à l'intérieur du triangle." << std::endl;
	else
		std::cout << "Le point est à l'extérieur du triangle." << std::endl;

    return 0;
}
