/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 13:13:29 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/05 20:50:04 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int y;

	i = 0;
	if (*to_find == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		y = 0;
		while (str[i + y] == to_find[y] && str[i + y] != '0')
		{
			y++;
		}
		if (to_find[y] == '\0')
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}