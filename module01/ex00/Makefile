# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/28 17:25:21 by mvachera          #+#    #+#              #
#    Updated: 2024/01/13 18:37:51 by mvachera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = zombie

CC      = c++

CFLAGS  = -Wall -Wextra -Werror -std=c++98 -g3

RM      = rm -f

SRC     = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

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
