/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_replacement_char.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 15:17:29 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/21 22:30:55 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpp.h"

char	ft_get_replacement_char(char *map, int index)
{
	int		i;
	int		y;
	char	c;

	i = 0;
	while (map[i] != '\n')
		i++;
	i--;
	y = i - index;
	while (i >= 0)
	{
		if (i == y)
			c = map[i];
		i--;
	}
	return (c);
}
