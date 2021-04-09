# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/06 08:16:05 by Mathis            #+#    #+#              #
#    Updated: 2020/11/06 08:16:05 by Mathis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= phoneBook

SRCS			= book.cpp Contact.cpp

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
