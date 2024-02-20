# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/27 19:42:14 by mvachera          #+#    #+#              #
#    Updated: 2024/02/10 09:02:06 by mvachera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = RPN

CXX      = c++

CXXFLAGS  = -Wall -Wextra -Werror -std=c++98 -g3

RM      = rm -f

SRC     = main.cpp  RPN.cpp

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
