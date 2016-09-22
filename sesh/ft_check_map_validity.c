/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_validity.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 12:26:08 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/21 19:58:50 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpp.h"

int		ft_check_map_validity(char *map)
{
	int lc;

	if (map[0] < 1)
		return (0);
	if (!(lc = ft_check_line_count(map)))
		return (0);
	if (!ft_check_line_long(map, lc))
		return (0);
	if (!ft_check_map_chars(map))
		return (0);
	return (1);
}
