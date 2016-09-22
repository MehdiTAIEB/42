# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/15 13:50:31 by mtaieb            #+#    #+#              #
#    Updated: 2016/09/15 17:44:06 by mtaieb           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SRC = ft_cat.c ft_putstr.c ft_putchar.c ft_read_user_input.c ft_display_files.c ft_handle_errors.c

FLAGS = -Wall -Werror -Wextra

all:
	gcc -c $(SRC) $(FLAGS)
	gcc -o $(NAME) $(NAME).o ft_putstr.o ft_putchar.o ft_read_user_input.o ft_display_files.c ft_handle_errors.o

clean:
	rm -rf $(NAME).o ft_putstr.o ft_putchar.o ft_read_user_input.o ft_display_files.o ft_handle_errors.o

fclean: clean
	rm -rf $(NAME)
