/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_user_input.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 16:51:40 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/15 20:50:42 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_prot.h"

#define BUF_SIZE 20000

void	ft_read_user_input(void)
{
	int		ret;
	char	buf[BUF_SIZE + 1];

	while ((ret = read(STDIN_FILENO, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
}
