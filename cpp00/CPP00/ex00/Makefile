# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/06 08:15:37 by Mathis            #+#    #+#              #
#    Updated: 2020/11/06 08:15:42 by Mathis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= megaphone

SRCS			= megaphone.cpp

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

