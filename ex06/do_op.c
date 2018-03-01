/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 18:10:14 by cdupuis           #+#    #+#             */
/*   Updated: 2018/02/28 19:15:30 by cdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		check_zero(char *zero, char *op)
{
	int zero_i;

	zero_i = ft_atoi(zero);
	if (zero_i == 0)
	{
		if (ft_cmp(op, "/") == 0)
		{
			write(1, "Stop : division by zero\n", 25);
			return (1);
		}
		if (ft_cmp(op, "%") == 0)
		{
			write(1, "Stop : modulo by zero\n", 25);
			return (1);
		}
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int i;
	int a;
	int b;

	if (argc != 4)
		return (0);
	i = 0;
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	while (i < 5)
	{
		if (ft_cmp(argv[2], g_opptab[i].opp) == 0)
		{
			if (check_zero(argv[3], argv[2]) == 1)
				return (0);
			ft_putnbr(g_opptab[i].f(a, b));
			return (0);
		}
		i++;
	}
	ft_putnbr(0);
	return (0);
}
