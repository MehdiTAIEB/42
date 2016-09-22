/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_param_num.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 21:38:55 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/14 21:55:24 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check_param_num(int argc)
{
	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
	return (1);
}
