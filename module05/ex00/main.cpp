/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:38:43 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/25 19:38:05 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	try {
		Bureaucrat bureaucrat("John Doe", 50);
		std::cout << bureaucrat << std::endl;

		bureaucrat.increment();
		std::cout << bureaucrat << std::endl;

		bureaucrat.decrement();
		std::cout << bureaucrat << std::endl;

		Bureaucrat invalidBureaucrat("Invalid", 160);
	}
	catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return (0);
}
