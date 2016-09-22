/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpp.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 11:12:15 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/19 14:31:21 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_H
# define CPP_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*ft_open_files(char **argv, int i);
int		ft_check_map_validity(char *map);
int		ft_strlen(char *str);
int		ft_check_line_count(char *map);
int		ft_check_line_long(char *map, int lc);
void	ft_handle_errors(void);
int		ft_check_map_chars(char *map);
#endif
