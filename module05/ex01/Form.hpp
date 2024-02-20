/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:47:18 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/26 16:52:49 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(const std::string& name, const int grade_sign, const int grade_exect);
		Form(const Form& other);
		~Form();

		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		Form& operator=(const Form& other);

		const std::string	getName() const;
		bool				getIs_signed() const;
		int			getGrade_sign() const;
		int			getGrade_exec() const;

		void	beSigned(const Bureaucrat& bureaucrat);
	private:
		const std::string	name;
		bool	is_signed;
		const int	grade_sign;
		const int	grade_exect;
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif
