/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 11:18:48 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/21 15:10:12 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpp.h"

int		main(int argc, char **argv)
{
	int		i;
	char	*map;
	char	fill_char;
	char	locked_char;
	char	free_char;
	int		y;

	i = 1;
	y = 0;
	if (argc == 1)
	{
		map = ft_read_input();
		if (!map)
			ft_handle_errors();
		else
			// here start algo
	}
	while (i < argc)
	{
		map = ft_open_files(argv, i);
		if (!map || !ft_check_map_validity(map))
			ft_handle_errors();
		else
		{
			fill_char = ft_get_replacement_char(map, 0);
			locked_char = ft_get_replacement_char(map, 1);
			free_char = ft_get_replacement_char(map, 2);
		}
		i++;
	}
	free(map);
	return (0);
}
