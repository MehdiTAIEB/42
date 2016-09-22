/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 13:22:53 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/01 18:28:22 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_display_comb(char c, char d, char e);

void	ft_display_comb(char c, char d, char e)
{
	ft_putchar(c);
	ft_putchar(d);
	ft_putchar(e);
}

void	ft_print_comb(void)
{
	char c;
	char d;
	char e;

	c = '0';
	while (c <= '7')
	{
		d = c + 1;
		while (d <= '8')
		{
			e = d + 1;
			while (e <= '9')
			{
				ft_display_comb(c, d, e);
				if (c != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				e++;
			}
			d++;
		}
		c++;
	}
}
