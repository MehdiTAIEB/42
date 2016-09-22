# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/12 11:18:12 by mtaieb            #+#    #+#              #
#    Updated: 2016/09/17 17:07:42 by mtaieb           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRC = main.c ft_putchar.c ft_putstr.c ft_putnbr.c eval_expr.c ft_get_braket.c ft_get_close_braket.c ft_strlen.c ft_seed_string.c ft_split_whitespaces.c ft_atoi.c ft_test.c ft_do_op.c

FLAGS = -Wall -Werror -Wextra

all:
	gcc -c $(SRC) $(FLAGS)
	gcc -o $(NAME) $(NAME).o ft_putchar.o ft_putstr.o main.o ft_putnbr.o ft_get_braket.o ft_get_close_braket.o ft_strlen.o ft_seed_string.o ft_split_whitespaces.o ft_atoi.o ft_test.o ft_do_op.o

clean:
	rm -rf $(NAME).o ft_putchar.o ft_putstr.o main.o ft_putnbr.o ft_get_braket.o ft_get_braket.o ft_strlen.o ft_seed_string.o ft_split_whitespaces.o ft_atoi.o ft_test.o ft_do_op.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
