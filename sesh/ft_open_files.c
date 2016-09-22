/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_files.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 11:35:17 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/21 22:35:41 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpp.h"

#define BUF_SIZE 5

char	*ft_open_files(char **argv, int i, char *buf)
{
	int		fd;
	int		ret;
	int		n;
	char	*str;
	char	*tmp;

	n = 0;
	str = NULL;
	fd = open(argv[i], O_RDONLY);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		tmp = str;
		if ((str = (char*)malloc(sizeof(char) * (n + ret) + 1)) == 0)
			return (0);
		i = ft_store_map_chars(n, str, tmp);
		while (i < n + ret)
			i = ft_fill_from_tmp(i, n, str, buf);
		str[i] = '\0';
		n = n + ret;
		free(tmp);
	}
	close(fd);
	return (str);
}

int		ft_store_map_chars(int n, char *str, char *tmp)
{
	int i;

	i = 0;
	while (i < n)
	{
		str[i] = tmp[i];
		i++;
	}
	return (i);
}

int		ft_fill_from_tmp(int i, int n, char *str, char *buf)
{
	str[i] = buf[i - n];
	i++;
	return (i);
}
