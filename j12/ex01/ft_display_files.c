/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_files.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 16:58:40 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/15 20:50:44 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_prot.h"

#define BUF_SIZE 20000

void	ft_display_files(int argc, char **argv)
{
	int		fd;
	int		i;
	int		ret;
	char	buf[BUF_SIZE + 1];

	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd != -1)
		{
			while ((ret = read(fd, buf, BUF_SIZE)))
			{
				buf[ret] = '\0';
				ft_putstr(buf);
			}
		}
		else
		{
			ft_handle_errors(argv[i]);
		}
		close(fd);
		i++;
	}
}
