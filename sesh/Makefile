# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/19 11:15:01 by mtaieb            #+#    #+#              #
#    Updated: 2016/09/21 22:34:09 by mtaieb           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRC = main.c ft_putchar.c ft_putstr.c ft_open_files.c ft_check_map_validity.c ft_strlen.c ft_check_line_count.c ft_check_line_long.c ft_handle_errors.c ft_check_map_chars.c ft_get_replacement_char.c ft_read_input.c ft_atoi.c ft_handle_map.c

MLG = main.o ft_putchar.o ft_putstr.o ft_open_files.o ft_check_map_validity.o ft_strlen.o ft_check_line_count.o ft_check_line_long.o ft_handle_errors.o ft_check_map_chars.o ft_get_replacement_char.o ft_read_input.o ft_atoi.o ft_handle_map.o

FLAGS = -Wall -Werror -Wextra

all:
	gcc -c $(SRC) $(FLAGS)
	gcc -o $(NAME) $(MLG)

clean:
	rm -rf $(MLG)

fclean: clean
	rm -rf $(NAME)

re: fclean all
