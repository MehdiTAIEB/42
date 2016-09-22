/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prot.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 13:53:10 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/18 21:06:21 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PROT_H
# define FT_PROT_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <errno.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_read_user_input(void);
void	ft_display_files(int argc, char **argv);
void	ft_handle_errors(char *argv);
#endif
