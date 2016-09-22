/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_seed_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 16:34:39 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/17 16:41:04 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpp.h"

char	*ft_seed_string(char *expr, int start, int interval)
{
	int c;
	char *tmp;

	c = 0;
	tmp = (char*)malloc(sizeof(expr) * (interval + 1));
	while (expr[start] != 41)
	{
		tmp[c] = expr[start];
		c++;
		start++;
	}
	tmp[c] = '\0';
	return (tmp);
}
