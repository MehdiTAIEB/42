/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 20:46:51 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/14 21:03:57 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *list;
	t_list *sw;

	list = *begin_list;
	while (list->next)
	{
		if ((*cmp)(list->data, data_ref) == 0)
		{
			sw = list;
			list = list->next;
			free(sw);
		}
		list->next = list->next;
	}
}
