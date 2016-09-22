/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 20:01:47 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/03 21:41:04 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 0;
	while (i != nb)
	{
		i++;
	}
	while (i >= 0)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i--;
	}
	return (0);
}