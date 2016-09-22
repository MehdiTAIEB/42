/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prot.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 21:44:12 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/15 13:47:18 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PROT_H
# define FT_PROT_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

int		ft_check_param_num(int argc);
void	ft_read_file(char *name);
void	ft_putchar(char c);
void	ft_putstr(char *str);
#endif
