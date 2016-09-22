/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_line_long.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 12:48:21 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/21 19:58:47 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpp.h"

int		ft_check_line_long(char *map, int lc)
{
	int i;
	int y;
	int t;

	i = 0;
	y = 1;
	while (map[i] != '\n')
		i++;
	i++;
	t = ft_strlen(&map[i]) / lc;
	while (map[i] != '\0')
	{
		if (map[i] == '\n')
		{
			if (y != t)
				return (0);
			y = 0;
		}
		y++;
		i++;
	}
	return (1);
}
