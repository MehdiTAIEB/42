/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_render_res.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 11:04:46 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/16 16:55:07 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
int		ft_sum(int a, int b);
int		ft_sub(int a, int b);
int		ft_mult(int a, int b);
int		ft_div(int a, int b);
int		ft_mod(int a, int b);

void	ft_render_res(int op, int first_num, int second_num)
{
	int	(*operator[5]) (int a, int b);

	operator[0] = ft_sum;
	operator[1] = ft_sub;
	operator[2] = ft_mult;
	operator[3] = ft_div;
	operator[4] = ft_mod;
	if (op < 5)
	{
		if (op == 3 && second_num == 0)
			ft_putstr("Stop : division by zero\n");
		else if (op == 4 && second_num == 0)
			ft_putstr("Stop : modulo by zero\n");
		else
		{
			ft_putnbr((*operator[op])(first_num, second_num));
			ft_putchar('\n');
		}
	}
	else
	{
		ft_putnbr(0);
		ft_putchar('\n');
	}
}
