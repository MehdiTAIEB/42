/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 18:22:56 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/22 15:06:26 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpp.h"

#define BUF_SIZE 5

char	*ft_read_input(char *buf)
{
	char	*str;
	char	*tmp;
	int		ret;
	int		i;
	int		n;

	n = 0;
	str = NULL;
	while ((ret = read(STDIN_FILENO, buf, BUF_SIZE)))
	{
		i = 0;
		tmp = str;
		if ((str = (char *)malloc(sizeof(char) * (n + ret) + 1)) == 0)
			return (0);
		i = ft_store_map_chars(n, str, tmp);
		while (i < n + ret)
			i = ft_fill_from_tmp(i, n, str, buf);
		str[i] = '\0';
		n = n + ret;
		free(tmp);
	}
	return (str);
}
