/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 19:35:32 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/05 20:19:53 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int		main(void)
{
	char dest[50];
	char src[50];
	unsigned int i;

	i = 5;
	ft_strlcat(dest, src, i);
	return (0);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	
}
