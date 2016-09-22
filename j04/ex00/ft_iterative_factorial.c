/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 14:41:12 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/03 21:56:18 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int cp;

	cp = nb;
	if (nb > 1)
	{
		while (--nb >= 1)
		{
			cp = cp * (nb);
		}
		return (cp);
	}
	else if (nb == 1 || nb == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
