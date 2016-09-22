/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 11:18:48 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/19 14:31:23 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpp.h"

int		main(int argc, char **argv)
{
	char *map;
	int		i;

	i = 1;
	while (i < argc)
	{
		map = ft_open_files(argv, i);
		if (ft_check_map_validity(map))
		{
			ft_putstr("gggg");
		}
		else
			ft_handle_errors();
		i++;
	}
	return (0);
}
