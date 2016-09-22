/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 14:48:11 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/13 22:28:35 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i < (length - 1))
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			i++;
		else
			i = length;
	}
	if (i == (length - 1))
		return (1);
	i = 0;
	while (i < (length - 1))
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			i++;
		else
			i = length;
	}
	if (i == (length - 1))
		return (1);
	return (0);
}
