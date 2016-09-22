/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle_eval.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 12:44:10 by psebasti          #+#    #+#             */
/*   Updated: 2016/09/18 21:06:21 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLLE_EVAL_H
# define COLLE_EVAL_H

# include "cpp.h"

typedef char* (*t_coll)(int, int, char*);

t_coll g_colletab[] =
{
	&ft_colle00,
	&ft_colle01,
	&ft_colle02,
	&ft_colle03,
	&ft_colle04,
};
#endif
