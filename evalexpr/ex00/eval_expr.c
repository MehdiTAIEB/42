/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 11:33:41 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/17 17:08:22 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpp.h"

int		eval_expr(char *expr)
{
	int interval;
	int f_braket;
	int l_braket;
	int c;
	int i;
	char *tmp;
	char **tab;

	c = 0;
	i = 0;
	f_braket = ft_get_braket(expr);
	l_braket = ft_get_close_braket(f_braket, expr);
	if (f_braket && l_braket)
	{
		interval = l_braket + 1 - f_braket;
		i = f_braket + 1;
		tmp = ft_seed_string(expr, i, interval);
		tab = ft_split_whitespaces(tmp);
		ft_test(tab);
		// splite on whitespace then detect priop
		// then do op with atoi([-1]) and atoi(priop[+1])
		// recall new string with result of do op that replaced former solved instruction
	}
	return (f_braket);
}
