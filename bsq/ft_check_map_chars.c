/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_chars.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 14:07:07 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/19 14:29:48 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpp.h"

int		ft_check_map_chars(char *map)
{
	int i;
	char locked;
	char free;
	
	i = 0;
	while (map[i] <= '9' && map[i] >= '0')
		i++;
	while (map[i] != '\n')
	{
		if (i == 1)
			free = map[i];
		else if (i == 2)
			locked = map[i];
		i++;
	}
	i++;
	while (map[i] != '\0')
	{
		if (map[i] != free && map[i] != locked && map[i] != '\n')
			return (0);
		i++;
	}
	return (1);
}
