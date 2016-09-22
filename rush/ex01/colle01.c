/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/04 16:19:35 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/04 17:40:10 by mtaieb           ###   ########.fr       */
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
					if (cp == 1)
					{
						if (x == 1 && y == 1)
						{
							ft_putchar('/');
							ft_putchar('\n');
						}
						else if ((l == 1 && x > 1) || (l == y && x == 1))
						{
							ft_putchar('\\');
							ft_putchar('\n');
						}
						else
						{
							ft_putchar('/');
							ft_putchar('\n');
						}
					}
					else
					{
						if (l == 1)
						{
							ft_putchar('/');
						}
						else
						{
							ft_putchar('\\');
						}
					}
				}
				else
				{
					ft_putchar('*');
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
					ft_putchar('*');
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
