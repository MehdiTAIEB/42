/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 20:55:34 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/18 21:04:10 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpp.h"

#define BUF_SIZE 20000

char	*ft_read_input(void)
{
	int		ret;
	char	buf[BUF_SIZE + 1];
	char	*str;
	int		i;

	i = 0;
	while ((ret = read(STDIN_FILENO, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		while (buf[i] != '\0')
			i++;
		str = (char*)malloc(sizeof(str) * i + 1);
		str = buf;
	}
	return (str);
}
