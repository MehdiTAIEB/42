/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 18:00:18 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/02 23:41:54 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char *c, char *b);

void	ft_swap(char *c, char *b)
{
	char e;

	e = *c;
	*c = *b;
	*b = e;
}

char	*ft_strrev(char *str)
{
	int len;
	int i;

	len = 0;
	i = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	len = len - 1;
	while (i < len)
	{
		ft_swap(&str[i], &str[len]);
		i++;
		len--;
	}
	return (str);
}
