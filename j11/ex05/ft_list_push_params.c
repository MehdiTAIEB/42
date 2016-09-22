/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 16:29:38 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/14 17:57:10 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	int		i;

	i = 1;
	if (ac == 1)
	{
		return (NULL);
	}
	list = ft_create_elem(av[i]);
	i++;
	while (i < ac)
	{
		list = ft_list_push_front(list, av[i]);
		i++;
	}
	return (list);
}

t_list	*ft_list_push_front(t_list *begin_list, void *data)
{
	t_list *list;

	list = malloc(sizeof(t_list));
	if (list)
	{
		list->data = data;
		list->next = begin_list;
	}
	return (list);
}
