/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:38:43 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/26 17:01:51 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	try {
		Bureaucrat bureaucrat("John Doe", 2);
		Form	form("Form A", 1, 2);

		std::cout << bureaucrat << std::endl;
		std::cout << form << std::endl;

		bureaucrat.signForm(form);
	}
	catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return (0);
}
