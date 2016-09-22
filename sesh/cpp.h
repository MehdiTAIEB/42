/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpp.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 11:12:15 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/21 22:50:23 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_H
# define CPP_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_handle_errors(void);
char	*ft_open_files(char **argv, int i, char *buf);
char	*ft_read_input(char *buf);
char	ft_get_replacement_char(char *map, int index);
int		ft_check_map_validity(char *map);
int		ft_strlen(char *str);
int		ft_check_line_count(char *map);
int		ft_check_line_long(char *map, int lc);
int		ft_check_map_chars(char *map);
int		ft_atoi(char *str);
int		ft_store_map_chars(int n, char *str, char *tmp);
int		ft_fill_from_tmp(int i, int n, char *str, char *buf);
int		ft_x(char *map);
void	ft_handle_map(char *map);
#endif
