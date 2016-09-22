/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 19:11:27 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/14 13:20:57 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *list;
	t_list *sw;

	list = *begin_list;
	while (list)
	{
		sw = list->next;
		free(list);
		list = sw;
	}
}
