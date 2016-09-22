/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 09:57:07 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/09 15:36:57 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src);

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		y;
	char	*str;

	i = 1;
	y = 0;
	while (i < argc)
	{
		while (argv[i][y] != '\0')
		{
			y++;
		}
		i++;
	}
	str = (char*)malloc(sizeof(*str) * (y + argc));
	i = 1;
	y = 0;
	while (i < argc)
	{
		ft_strcat(str, argv[i]);
		i++;
	}
	return (str);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int y;

	i = 0;
	y = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[y] != '\0')
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	dest[i] = '\n';
	dest[i + 1] = '\0';
	return (dest);
}
