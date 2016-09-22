/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 16:53:36 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/17 20:08:09 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpp.h"

void	ft_test(char **tab)
{
	int i;
	int res;
	int c;

	i = 0;
	res = 0;
	c = 0;
	while (tab[i] != '\0')
	{
		if (tab[i][0] == 37 || tab[i][0] == 47 || tab[i][0] == 42)
		{
			if (!c)
			{
				res = ft_do_op(ft_atoi(tab[i - 1]), ft_atoi(tab[i + 1]), tab[i][0]);
				c = i - 2;
			}
		}
		i++;
	}
	ft_putnbr(res);
	/*if (tab[i][0] == 45)
	  {
	  if (res)
	  {
	  res = ft_do_op(res, ft_atoi(tab[i + 1]), 45);
	  ft_putnbr(res);
	  }
	  }
	  */
	/*i = 0;
	  while (tab[i] != '\0')
	  {
	  if (tab[i][0] == 45 || tab[i][0] == 43)
	  {
	  a = ft_atoi(tab[i - 1]);
	  b = ft_atoi(tab[i + 1]);
	  c = tab[i][0];
	  res += ft_do_op(a, b, c);
	  }
	  i++;
	  }*/
}
