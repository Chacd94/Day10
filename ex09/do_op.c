/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 18:10:14 by cdupuis           #+#    #+#             */
/*   Updated: 2018/03/01 16:13:03 by cdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include "ft_opp.h"

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

int		ft_usage(int val1, int val2)
{
	int i;

	val1 = 0;
	val2 = 0;
	i = 0;
	ft_putstr("error : only [ ");
	while (i < 5)
	{
		ft_putstr(g_opptab[i].opp);
		ft_putchar(' ');
		i++;
	}
	ft_putstr("] are accepted.\n");
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
	g_opptab[i].f(a, b);
	return (0);
}
