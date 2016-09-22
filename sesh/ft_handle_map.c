/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 22:47:25 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/21 22:51:09 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpp.h"

void	ft_handle_map(char *map)
{
	char fill_char;
	char locked_char;
	char free_char;

	if (!map || !ft_check_map_validity(map))
		ft_handle_errors();
	else
	{
		fill_char = ft_get_replacement_char(map, 0);
		locked_char = ft_get_replacement_char(map, 1);
		free_char = ft_get_replacement_char(map, 2);
		ft_putstr(map);
	}
}
