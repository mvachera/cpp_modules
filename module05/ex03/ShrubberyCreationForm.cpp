/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:07:43 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/31 18:25:48 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation", 145, 137), target("Shrubbery Creation")
{
	std::cout << "ShrubberyCreationForm default constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("Shrubbery Creation", 145, 137), target(target)
{
	std::cout << "ShrubberyCreationForm constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm("Shrubbery Creation", 145, 137), target(other.target)
{
	*this = other;
	std::cout << "ShrubberyCreationForm default constructor called." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called." << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	if (this != &other)
		AForm::operator=(other);

	return (*this);	
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!getIs_signed())
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > getGrade_exec())
		throw AForm::GradeTooLowException();

	std::ofstream outfile((target + "_shrubbery").c_str());
	if (outfile.is_open())
	{
		outfile << "###########################'`################################\n \
###########################  V##'############################\n \
#########################V'  `V  ############################\n \
########################V'      ,############################\n \
#########`#############V      ,A###########################V \n\
########' `###########V      ,###########################V',#\n \
######V'   ###########l      ,####################V~~~~'',###\n \
#####V'    ###########l      ##P' ###########V~~'   ,A#######\n \
#####l      d#########l      V'  ,#######V~'       A#########\n \
#####l      ##########l         ,####V''         ,###########\n \
#####l        `V######l        ,###V'   .....;A##############\n \
#####A,         `######A,     ,##V' ,A#######################\n \
#######A,        `######A,    #V'  A########'''''##########''\n \
##########,,,       `####A,           `#''           '''  ,,,\n \
#############A,                               ,,,     ,######\n \
######################oooo,                 ;####, ,#########\n \
##################P'                   A,   ;#####V##########\n \
#####P'    ''''       ,###             `#,     `V############\n \
##P'                ,d###;              ##,       `V#########\n \
##########A,,   #########A              )##,    ##A,..,ooA###\n \
#############A, Y#########A,            )####, ,#############\n \
###############A ############A,        ,###### ##############\n \
###############################       ,#######V##############\n \
###############################      ,#######################\n \
##############################P    ,d########################\n \
##############################'    d#########################\n \
##############################     ##########################\n \
##############################     ##########################\n \
#############################P     ##########################\n \
#############################'     ##########################\n \
############################P      ##########################\n \
###########################P'     ;##########################\n \
###########################'     ,###########################\n \
##########################       ############################\n \
#########################       ,############################\n \
########################        d###########P'    `Y#########\n \
#######################        ,############        #########\n \
######################        ,#############        #########\n \
#####################        ,##############b.    ,d#########\n \
####################        ,################################\n \
###################         #################################\n \
##################          #######################P'  `V##P'\n \
#######P'     `V#           ###################P\n \
#####P'                    ,#################P' \n \
###P'                      d##############P'' \n \
##P'                       V##############' \n \
#P'                         `V###########'" << std::endl;
		outfile.close();
	}
	else
		throw std::runtime_error("Unable to open file for writing.");
}
