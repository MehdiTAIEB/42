/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 17:07:57 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/17 17:16:35 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpp.h"

int		ft_do_op(int a, int b, char op)
{
	int res;

	res = 0;
	if (op == 37)
	{
		return (a % b);
	}
	else if (op == 47)
	{
		return (a / b);
	}
	else if (op == 42)
	{
		return (a * b);
	}
	else if (op == 45)
	{
		return (a - b);
	}
	else if (op == 43)
	{
		return (a + b);
	}
	return (res);
}
