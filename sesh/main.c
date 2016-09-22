/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 11:18:48 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/21 22:51:11 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpp.h"

#define BUF_SIZE 5

int		main(int argc, char **argv)
{
	int		i;
	char	*map;
	char	buf[BUF_SIZE + 1];

	i = 1;
	if (argc == 1)
	{
		map = ft_read_input(buf);
		ft_handle_map(map);
		return (0);
	}
	while (i < argc)
	{
		map = ft_open_files(argv, i, buf);
		ft_handle_map(map);
		i++;
	}
	free(map);
	return (0);
}
