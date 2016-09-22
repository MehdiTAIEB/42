/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 12:34:37 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/07 04:12:56 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		ft_strcmp(char *s1, char *s2);
void	ft_sort_params(int argc, char **argv);
void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	ft_sort_params(argc, argv);
	return (0);
}

void	ft_sort_params(int argc, char **argv)
{
	int		y;
	int		inf;
	char	*sw;

	inf = 1;
	while (inf)
	{
		y = 0;
		inf = 0;
		while (++y < argc - 1)
		{
			if (ft_strcmp(argv[y], argv[y + 1]) > 0)
			{
				sw = argv[y];
				argv[y] = argv[y + 1];
				argv[y + 1] = sw;
				inf++;
			}
		}
	}
	y = 0;
	while (++y < argc)
		ft_putstr(argv[y]);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
