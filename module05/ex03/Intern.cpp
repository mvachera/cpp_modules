/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 21:35:23 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/27 19:30:04 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

const char*	Intern::FormUnknown::what() const throw()
{
	return ("Form unknow.");
}

Intern::Intern()
{
	std::cout << "Intern default constructor called." << std::endl;
}

Intern::Intern(const Intern& other)
{
	*this = other;
	std::cout << "Intern copy constructor called." << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called." << std::endl;
}

Intern&	Intern::operator=(const Intern& other)
{
	(void)other;

	return(*this);
}

AForm*	Intern::makeForm(const std::string& formToCreate, const std::string& target)
{
	std::string	allForm[3] = {"presidential pardon", "shrubbery creation", "robotomy request"};
	AForm	*result = NULL;

	switch (whatCase(allForm, formToCreate))
	{
		case 0 :
			result = new PresidentialPardonForm(target);
			break ;
		case 1 :
			result = new ShrubberyCreationForm(target);
			break ;
		case 2 :
			result = new RobotomyRequestForm(target);
			break ;
		case 3 :
			throw Intern::FormUnknown();
			return (NULL);
	}
	std::cout << "Intern creates " << formToCreate << "." << std::endl;
	return (result);
}

int	whatCase(std::string *allForm, const std::string& formToCreate)
{
	for (int i = 0; i < 3; i++)
	{
		if (allForm[i] == formToCreate)
			return (i);
	}
	return (3);
}
