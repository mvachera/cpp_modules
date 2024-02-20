# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/28 21:47:33 by mvachera          #+#    #+#              #
#    Updated: 2024/01/13 18:38:22 by mvachera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = violence

CC      = c++

CFLAGS  = -Wall -Wextra -Werror -std=c++98 -g3

RM      = rm -f

SRC     = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJ     = ${SRC:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJ}
		${CC} ${CFLAGS} ${OBJ} -o ${NAME}

clean :
	${RM} ${OBJ}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re
