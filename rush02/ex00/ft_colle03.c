/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colle03.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 16:14:32 by psebasti          #+#    #+#             */
/*   Updated: 2016/09/18 20:49:59 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpp.h"
#include <stdlib.h>

char	ft_line03(int x_pos, int y_pos, int x, int y)
{
	char sign;

	if ((y_pos == 0 && x_pos == 0) || (y_pos == y && x_pos == 0))
		sign = 'A';
	else if ((y_pos == y && x_pos == x) || (y_pos == 0 && x_pos == x))
		sign = 'C';
	else if (y_pos == 0 || y_pos == y)
		sign = 'B';
	else if (x_pos == 0 || x_pos == x)
		sign = 'B';
	else
		sign = ' ';
	return (sign);
}

char	*ft_colle03(int x, int y, char *tmp)
{
	int		x_pos;
	int		y_pos;
	int		count;

	x--;
	y--;
	y_pos = 0;
	count = 0;
	while (y_pos <= y && y >= 0)
	{
		x_pos = 0;
		while (x_pos <= x)
		{
			count++;
			tmp[count - 1] = ft_line03(x_pos, y_pos, x, y);
			x_pos++;
		}
		tmp[count++] = '\n';
		y_pos++;
	}
	return (tmp);
}
