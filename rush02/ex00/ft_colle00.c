/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colle00.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 15:50:51 by psebasti          #+#    #+#             */
/*   Updated: 2016/09/18 20:50:32 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpp.h"
#include <stdlib.h>

char	ft_line00(int x_pos, int y_pos, int x, int y)
{
	char sign;

	if ((x_pos == 0 || x_pos == x) && y_pos == 0)
		sign = 'o';
	else if ((x_pos == 0 || x_pos == x) && y_pos == y)
		sign = 'o';
	else if (y_pos == 0 || y_pos == y)
		sign = '-';
	else if (x_pos == 0 || x_pos == x)
		sign = '|';
	else
		sign = ' ';
	return (sign);
}

char	*ft_colle00(int x, int y, char *tmp)
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
			tmp[count - 1] = ft_line00(x_pos, y_pos, x, y);
			x_pos++;
		}
		tmp[count++] = '\n';
		y_pos++;
	}
	return (tmp);
}
