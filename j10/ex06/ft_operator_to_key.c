/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operator_to_key.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 18:09:57 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/12 22:12:30 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_operator_to_key(char o)
{
	if (o == 43)
	{
		return (0);
	}
	else if (o == 45)
	{
		return (1);
	}
	else if (o == 42)
	{
		return (2);
	}
	else if (o == 47)
	{
		return (3);
	}
	else if (o == 37)
	{
		return (4);
	}
	return (5);
}
