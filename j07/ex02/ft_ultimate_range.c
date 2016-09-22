/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 06:58:56 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/08 12:26:10 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int c;
	int *y;

	i = 0;
	c = 0;
	if (min >= max)
	{
		*range = 0;
		return (i);
	}
	i = max - min;
	y = (int*)malloc(sizeof(*y) * (i + 1));
	while (min < max)
	{
		y[c] = min;
		c++;
		min++;
	}
	y[c] = '\0';
	*range = y;
	return (c);
}
