/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 11:47:12 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/07 11:17:38 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int y;

	i = 1;
	y = 0;
	while (i < argc)
	{
		while (argv[i][y] != '\0')
		{
			ft_putchar(argv[i][y]);
			y++;
		}
		ft_putchar('\n');
		y = 0;
		i++;
	}
	return (0);
}
