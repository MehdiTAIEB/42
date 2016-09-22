/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 11:07:02 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/03 20:00:32 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int first;
	int second;

	first = index - 1;
	second = first - 1;
	if (index < 0)
	{
		return (-1);
	}
	else if (index <= 1)
	{
		return (index);
	}
	else
	{
		return (ft_fibonacci(first) + ft_fibonacci(second));
	}
}
