/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 18:47:49 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/09 16:04:17 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_takes_place(int hour);

int		main(void)
{
	ft_takes_place(1);
	ft_takes_place(10);
	ft_takes_place(12);
	ft_takes_place(23);
	ft_takes_place(0);

	return (0);
}

void	ft_takes_place(int hour)
{
	if (hour > 12)
	{
		hour /= 2;
	}
	printf("%s", "THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d", hour);
	printf("%s", ".00 ");
	if (hour < 12)
	{
		printf("%s", "am ");
	}
	else
	{

		printf("%s", "pm ");
	}
	printf("%d", hour + 1);

	printf("%s", ".00");
	if (hour + 1 > 12)
	{
		printf("%s", "am ");
	}
	else
	{

		printf("%s", "pm ");
	}

	printf("%c", '\n');
}
