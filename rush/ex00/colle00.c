/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/04 11:55:26 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/04 16:22:35 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	colle(int x, int y)
{
	int cp;
	int cp1;
	int l;

	l = 1;
	cp = x;
	cp1 = y;
	while (l <= cp1)
	{
		if (l - 1 == 0 || l == y)
		{
			while (cp > 0)
			{
				if (cp == 1 || cp == x)
				{
					ft_putchar('o');
					if (cp == 1)
					{
						ft_putchar('\n');
					}
				}
				else
				{
					ft_putchar('-');
				}
				cp--;
			}
		}
		else
		{
			cp = x;
			while (cp > 0)
			{
				if (cp == 1 || cp == x)
				{
					ft_putchar('|');
					if (cp == 1)
					{
						ft_putchar('\n');
					}
				}
				else
				{
					ft_putchar(' ');
				}
				cp--;
			}
			cp = x;
		}
		l++;
	}
}
