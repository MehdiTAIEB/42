/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpp.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 11:25:32 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/17 17:08:18 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_H
# define CPP_H

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		eval_expr(char *expr);
int		ft_get_braket(char *expr);
int		ft_get_close_braket(int f_braket, char *expr);
int		ft_strlen(char *str);
char	*ft_seed_string(char *expr, int start, int interval);
char	**ft_split_whitespaces(char *str);
int		ft_nb_words(char *str);
int		ft_ln_w(char *str, int i);
void	ft_test(char **tab);
int		ft_atoi(char *str);
int		ft_do_op(int a, int b, char op);
#endif
