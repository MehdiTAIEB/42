/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_line_count.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 12:43:38 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/21 22:51:57 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpp.h"

int		ft_check_line_count(char *map)
{
	int		nl;
	int		i;
	int		y;
	char	*lc;

	i = 0;
	y = 0;
	nl = 0;
	while (map[i] != '\n')
		i++;
	i = i - 3;
	while (map[y] != map[i])
		y++;
	lc = (char*)malloc(sizeof(map) * (y + 1));
	y = 0;
	while (map[y] != map[i])
	{
		lc[y] = map[y];
		y++;
	}
	lc[y] = '\0';
	nl = ft_atoi(lc);
	free(lc);
	return (nl);
}
