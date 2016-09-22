/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 11:49:10 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/10 18:22:33 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_char(int argc, char **argv)
{
	int i;
	int y;

	i = 1;
	while (i < argc)
	{
		y = 0;
		while (argv[i][y] != '\0')
		{
			if ((argv[i][y] < 49 || argv[i][y] > 57) && argv[i][y] != 46)
			{
				return (1);
			}
			y++;
		}
		if (y != 9)
		{
			return (1);
		}
		i++;
	}
	return (0);
}