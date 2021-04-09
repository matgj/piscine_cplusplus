# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/14 12:26:43 by Mathis            #+#    #+#              #
#    Updated: 2020/11/14 17:12:38 by Mathis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=serialization

FLAGS=-Werror -Wall -Wextra -std=c++98

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) *.cpp -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
