# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/28 20:43:33 by mvachera          #+#    #+#              #
#    Updated: 2024/01/13 18:38:12 by mvachera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = hello_brain

CC      = c++

CFLAGS  = -Wall -Wextra -Werror -std=c++98 -g3

RM      = rm -f

SRC     = main.cpp

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
