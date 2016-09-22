/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 22:20:47 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/18 21:04:05 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpp.h"
#include "colle_eval.h"

void	ft_result(int num, int x, int y)
{
	ft_putstr("[colle0");
	ft_putnbr(num);
	ft_putchar(']');
	ft_putstr(" [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putchar(']');
}

void	ft_cmp(char *str, int x, int y)
{
	int		i;
	int		verif;
	char	*tmp;

	i = 0;
	verif = 0;
	while (i < 5)
	{
		tmp = (char*)malloc(sizeof(str) * (y * x) + y);
		if (ft_strcmp(str, (char*)g_colletab[i](x, y, tmp)) == 0)
		{
			if (verif > 0)
				ft_putstr(" || ");
			ft_result(i, x, y);
			verif++;
		}
		free(tmp);
		i++;
	}
	if (verif == 0)
		ft_putstr("aucune");
	ft_putchar('\n');
}

int		main(void)
{
	int		i;
	int		x;
	int		y;
	char	*str;

	i = 0;
	x = 0;
	y = 0;
	str = ft_read_input();
	while (str[i] != '\0')
	{
		if (str[i] == '\n' && !x)
			x = i;
		if (str[i] == '\n')
			y++;
		i++;
	}
	ft_cmp(str, x, y);
	return (0);
}
