/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_params_size.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 22:59:36 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/10 22:59:40 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_params_size(int argc)
{
	if (argc < 10 || argc > 10)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
