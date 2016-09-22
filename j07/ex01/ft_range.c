/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 06:39:23 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/08 12:26:09 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int c;
	int *y;

	c = 0;
	y = 0;
	if (min >= max)
	{
		return (NULL);
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
	return (y);
}
