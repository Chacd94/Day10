/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 19:09:24 by cdupuis           #+#    #+#             */
/*   Updated: 2018/03/01 16:10:35 by cdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
int				ft_atoi(char *str);
int				ft_cmp(char *str1, char *str2);
int				ft_add(int val1, int val2);
int				ft_sub(int val1, int val2);
int				ft_mul(int val1, int val2);
int				ft_div(int val1, int val2);
int				ft_mod(int val1, int val2);
int				ft_usage(int val1, int val2);

typedef struct	s_opp
{
	char		*opp;
	int			(*f)(int, int);
}				t_opp;

#endif
