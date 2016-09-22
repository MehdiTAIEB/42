/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 12:07:07 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/07 11:18:23 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	argc--;
	while (argc > 0)
	{
		while (argv[argc][i] != '\0')
		{
			ft_putchar(argv[argc][i]);
			i++;
		}
		ft_putchar('\n');
		i = 0;
		argc--;
	}
	return (0);
}
