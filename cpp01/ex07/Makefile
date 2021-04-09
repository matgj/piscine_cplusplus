# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/02 13:47:50 by Mathis            #+#    #+#              #
#    Updated: 2020/11/06 10:33:44 by Mathis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= replace

SRCS			= main.cpp File.cpp

OBJS			= ${SRCS:.cpp=.o}

CC				= clang++
CFLAGS 			= -Wall -Wextra -Werror
RM				= rm -f

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
				${CC} ${CFLAGS} -o $@ -c $<

clean:
				${RM} ${OBJS}

fclean:			clean
				${RM} ${NAME}

re:				fclean all

.PHONY: 		all fclean clean re
