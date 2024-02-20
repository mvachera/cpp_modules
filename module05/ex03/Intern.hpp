/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 21:35:21 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/27 18:57:12 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "AForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern& other);
		~Intern();

		class FormUnknown : public std::exception
		{
			public:
				const char* what() const throw();
		};

		Intern&	operator=(const Intern& other);

		AForm*	makeForm(const std::string& formToCreate, const std::string& target);
};

int	whatCase(std::string *allForm, const std::string& formToCreate);

#endif
