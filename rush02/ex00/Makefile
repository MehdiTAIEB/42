# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/17 22:12:08 by mtaieb            #+#    #+#              #
#    Updated: 2016/09/19 11:20:11 by mtaieb           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

SRC = main.c ft_putchar.c ft_putstr.c ft_strcmp.c ft_putnbr.c ft_colle00.c ft_colle01.c ft_colle02.c ft_colle03.c ft_colle04.c ft_read_input.c

MLG = main.o ft_putchar.o ft_putstr.o ft_strcmp.o ft_putnbr.o ft_colle00.o ft_colle01.o ft_colle02.o ft_colle03.o ft_colle04.o ft_read_input.o

FLAGS = -Wall -Werror -Wextra

all:
	gcc -c $(SRC) $(FLAGS)
	gcc -o $(NAME) $(MLG)

clean:
	rm -rf $(MLG)

fclean: clean
	rm -rf $(NAME)

re: fclean all
