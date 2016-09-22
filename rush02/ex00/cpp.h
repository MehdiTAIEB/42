/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpp.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 22:17:00 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/18 21:29:52 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_H
# define CPP_H

# include <unistd.h>
# include <stdlib.h>

char	*ft_colle00(int x, int y, char *tmp);
char	*ft_colle01(int x, int y, char *tmp);
char	*ft_colle02(int x, int y, char *tmp);
char	*ft_colle03(int x, int y, char *tmp);
char	*ft_colle04(int x, int y, char *tmp);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_putnbr(int nb);
char	*ft_read_input(void);
#endif
