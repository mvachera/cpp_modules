/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:47:21 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/26 16:54:37 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char*	Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high.");
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low.");
}

Form::Form() : name("no_name"), is_signed(false), grade_sign(150), grade_exect(150)
{
	std::cout << "Form default constructor called." << std::endl;
}

Form::Form(const std::string& name, const int grade_sign, const int grade_exect) :
	name(name), grade_sign(grade_sign), grade_exect(grade_exect)
{
	if (grade_sign < 1 || grade_exect < 1)
		throw GradeTooHighException();
	else if (grade_sign > 150 || grade_exect > 150)
		throw GradeTooLowException();

	is_signed = false;
	std::cout << "Form constructor called." << std::endl;
}

Form::Form(const Form& other) : name(other.name), grade_sign(other.grade_sign), grade_exect(other.grade_exect)
{
	*this = other;
	std::cout << "Form copy constructor called." << std::endl;
}

Form::~Form()
{
	std::cout << "Form destructor called." << std::endl;
}

Form&	Form::operator=(const Form& other)
{
	if (this != &other)
		is_signed = other.is_signed;

	return (*this);
}

const std::string	Form::getName() const
{
	return (name);
}

bool	Form::getIs_signed() const
{
	return (is_signed);
}

int	Form::getGrade_sign() const
{
	return (grade_sign);
}

int	Form::getGrade_exec() const
{
	return (grade_exect);
}

void	Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= grade_sign)
		is_signed = true;
	else
		throw GradeTooLowException();
}

std::ostream&	operator<<(std::ostream& os, const Form& form)
{
	os << "Form: " << form.getName() << ", Grade Required to Sign: " << form.getGrade_sign()
       << ", Grade Required to Execute: " << form.getGrade_exec()
       << ", Signed Status: " << (form.getIs_signed() ? "Signed" : "Not Signed");;

	return (os);
}
