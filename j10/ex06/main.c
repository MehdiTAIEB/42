/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 16:30:11 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/13 11:10:08 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_argc(int argc);
int		ft_atoi(char *c);
int		ft_operator_to_key(char o);
void	ft_render_res(int op, int first_num, int second_num);

int		main(int argc, char **argv)
{
	int first_num;
	int second_num;
	int op;

	if (ft_check_argc(argc))
	{
		first_num = ft_atoi(argv[1]);
		second_num = ft_atoi(argv[3]);
		op = ft_operator_to_key(argv[2][0]);
		ft_render_res(op, first_num, second_num);
	}
	return (0);
}
