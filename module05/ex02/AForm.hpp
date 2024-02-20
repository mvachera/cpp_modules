/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:47:18 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/26 20:30:39 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		AForm();
		AForm(const std::string& name, const int grade_sign, const int grade_exect);
		AForm(const AForm& other);
		virtual ~AForm();

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

		class FormNotSignedException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		AForm& operator=(const AForm& other);

		const std::string	getName() const;
		bool				getIs_signed() const;
		int			getGrade_sign() const;
		int			getGrade_exec() const;

		void	beSigned(const Bureaucrat& bureaucrat);

		virtual void	execute(Bureaucrat const & executor) const = 0;
	private:
		const std::string	name;
		bool	is_signed;
		const int	grade_sign;
		const int	grade_exect;
};

std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif
