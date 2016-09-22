/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 11:12:06 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/09 14:55:17 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	**ft_split_whitespaces(char *str);

int		main()
{
	char str[] = "mehdi\nlolilolmdr\tpute\nlol\n";
	ft_split_whitespaces(str);
}

char	**ft_split_whitespaces(char *str)
{
	char **str1;
	int len;
	int wn;
	int i;
	int t;

	len = 0;
	wn = 0;
	i = 0;
	t = 0;
	while (str[len] != '\0')
	{
		if (str[len] == '\n' || str[len] == '\t' || str[len == 32])
		{
			wn++;
		}
		len++;
	}
	str1 = (char**)malloc(sizeof(*str) * (wn + 1));
	wn = 0;
	while (str[i] != '\0')
	{
		if  (str[i] == '\n' || str[i] == '\t' || str[i] == 32)
		{
			t = len - i;
			t = len - t;
			str1[wn] = (char*)malloc(sizeof(*str) * (t + 1));
			wn++;
		}
		i++;
	}
	i = 0;
	t = 0;
	wn = 0;
	while (i < len)
	{
		if (str[i] == '\n' || str[i] == '\t' || str[i] == 32)
		{
			str1[wn] = &str[wn];
			str1[wn][i] = '\0';
			wn++;
			i++;
		}
		i++;
	}
	printf("%c", str1[1][0]);
	return (str1);
}
