/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:47:21 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/26 18:14:30 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

const char*	AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high.");
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low.");
}

const char*	AForm::FormNotSignedException::what() const throw()
{
	return ("Form not signed.");
}

AForm::AForm() : name("no_name"), is_signed(false), grade_sign(150), grade_exect(150)
{
	std::cout << "AForm default constructor called." << std::endl;
}

AForm::AForm(const std::string& name, const int grade_sign, const int grade_exect) :
	name(name), grade_sign(grade_sign), grade_exect(grade_exect)
{
	if (grade_sign < 1 || grade_exect < 1)
		throw GradeTooHighException();
	else if (grade_sign > 150 || grade_exect > 150)
		throw GradeTooLowException();

	is_signed = false;
	std::cout << "AForm constructor called." << std::endl;
}

AForm::AForm(const AForm& other) : name(other.name), grade_sign(other.grade_sign), grade_exect(other.grade_exect)
{
	*this = other;
	std::cout << "AForm copy constructor called." << std::endl;
}

AForm::~AForm()
{
	std::cout << "AForm destructor called." << std::endl;
}

AForm&	AForm::operator=(const AForm& other)
{
	if (this != &other)
		is_signed = other.is_signed;

	return (*this);
}

const std::string	AForm::getName() const
{
	return (name);
}

bool	AForm::getIs_signed() const
{
	return (is_signed);
}

int	AForm::getGrade_sign() const
{
	return (grade_sign);
}

int	AForm::getGrade_exec() const
{
	return (grade_exect);
}

void	AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= grade_sign)
		is_signed = true;
	else
		throw GradeTooLowException();
}

std::ostream&	operator<<(std::ostream& os, const AForm& Aform)
{
	os << "AForm: " << Aform.getName() << ", Grade Required to Sign: " << Aform.getGrade_sign()
       << ", Grade Required to Execute: " << Aform.getGrade_exec()
       << ", Signed Status: " << (Aform.getIs_signed() ? "Signed" : "Not Signed");;

	return (os);
}
