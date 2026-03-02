/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   total_bench.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranier <bgranier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 10:44:02 by bgranier          #+#    #+#             */
/*   Updated: 2026/03/02 12:42:31 by bgranier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	tot_bench(t_ctrl *c, char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (!ft_strcmp(argv[i], "--total"))
		{
			c->bench = 0;
			c->print_ops = 0;
			c->bench_tot = 1;
		}
		i++;
	}
}
