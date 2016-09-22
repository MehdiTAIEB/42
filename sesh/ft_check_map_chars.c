/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_chars.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 14:07:07 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/21 22:58:16 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpp.h"

int		ft_check_map_chars(char *map)
{
	int		i;
	int		y;
	char	locked;
	char	free;

	y = 0;
	i = ft_x(map);
	while (i >= 0)
	{
		if (y == 1)
			locked = map[i];
		else if (y == 2)
			free = map[i];
		i--;
		y++;
	}
	y++;
	while (map[y] != '\0')
	{
		if (map[y] != free && map[y] != locked && map[y] != '\n')
			return (0);
		y++;
	}
	return (1);
}

int		ft_x(char *map)
{
	int i;

	i = 0;
	while (map[i] != '\n')
		i++;
	if (i)
		i--;
	return (i);
}
