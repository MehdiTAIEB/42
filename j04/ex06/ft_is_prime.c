/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 20:34:59 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/03 21:37:03 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb);

int		main()
{
	int i;

	i = 3;
	printf("%d\n", ft_is_prime(i));
	return (0);
}

int		ft_is_prime(int nb)
{
	int i;
	int max;

	i = 1;
	max = 1;
	while (max <= nb)
	{
		if (max == nb)
		{
			i++;
			max = i - 1;
		}
		printf("%d\n", i);
		printf("%d\n", max);
		max++;
	}
	return (0);
}
