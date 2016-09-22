/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_files.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 11:35:17 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/21 14:02:15 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpp.h"

#define BUF_SIZE 5

char	*ft_open_files(char **argv, int i)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];
	int		n;
	char	*str;
	char	*tmp;

	n = 0;
	tmp = NULL;
	str = NULL;
	fd = open(argv[i], O_RDONLY);
	i = 0;
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		i = 0;
		tmp = str;
		if ((str = (char*)malloc(sizeof(char) * (n + ret) + 1)) == 0)
			return (0);
		while (i < n)
		{
			str[i] = tmp[i];
			i++;
		}
		while (i < n + ret)
		{
			str[i] = buf[i - n];
			i++;
		}
		str[i] = '\0';
		n = n + ret;
	}
	close(fd);
	if (str == NULL)
		return (NULL);
	return (str);
}
