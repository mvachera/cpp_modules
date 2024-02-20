/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:52:14 by mvachera          #+#    #+#             */
/*   Updated: 2023/12/19 17:49:26 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac < 2)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl,
				1);
	for (i = 1; i < ac; i++)
	{
		std::string word = av[i];
		for (j = 0; j < word.length(); j++)
			word[j] = static_cast<char>(ft_toupper(static_cast<unsigned char>(word[j])));
		std::cout << word;
		if (i < ac - 1)
			std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}
