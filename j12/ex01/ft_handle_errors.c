/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_errors.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 17:31:30 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/15 17:45:58 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_prot.h"

void	ft_handle_errors(char *argv)
{
	int err_code;

	err_code = errno;
	if (err_code == 2)
	{
		ft_putstr("cat: ");
		ft_putstr(argv);
		ft_putstr(": No such file or directory\n");
	}
	else if (err_code == 13)
	{
		ft_putstr("cat: ");
		ft_putstr(argv);
		ft_putstr(": Permission denied\n");
	}
}
