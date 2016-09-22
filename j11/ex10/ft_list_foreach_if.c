/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 20:09:54 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/14 20:45:54 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),\
		void *data_ref, int (*cmp)())
{
	t_list *list;

	list = begin_list;
	while (list->next)
	{
		if ((*cmp)(list->data, data_ref) == 0)
		{
			(*f)(list->data);
		}
		list = list->next;
	}
}
