/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_files.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 11:35:17 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/19 13:01:38 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpp.h"

#define BUF_SIZE 20000

char	*ft_open_files(char **argv, int i)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];
	int		y;
	char	*str;

	y = 0;
	fd = open(argv[i], O_RDONLY);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		while (buf[y] != '\0')
			y++;
		str = (char*)malloc(sizeof(str) * y + 1);
		str = buf;
	}
	close(fd);
	return (str);
}
