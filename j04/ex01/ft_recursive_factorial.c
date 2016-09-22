/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 23:52:42 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/03 21:58:28 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int cp;

	cp = nb;
	if (nb > 1 && nb <= 12)
	{
		cp = cp * ft_recursive_factorial(--nb);
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
