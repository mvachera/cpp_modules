# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/31 18:47:20 by mvachera          #+#    #+#              #
#    Updated: 2024/01/17 20:42:32 by mvachera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = ClapTrap

CXX      = c++

CXXFLAGS  = -Wall -Wextra -Werror -std=c++98 -g3

RM      = rm -f

SRC     = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJ     = ${SRC:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJ}
		${CXX} ${CXXFLAGS} ${OBJ} -o ${NAME}

clean :
	${RM} ${OBJ}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re
