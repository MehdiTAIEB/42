/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 15:39:25 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/14 20:16:55 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *list;
	t_list *list1;
	t_list *list2;

	list = *begin_list;
	list1 = list->next;
	list2 = list1->next;
	list->next = NULL;
	list1->next = list;
	while (list2)
	{
		list = list1;
		list1 = list2;
		list2 = list2->next;
		list1->next = list;
	}
	*begin_list = list1;
}
