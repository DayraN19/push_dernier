/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   total_bench.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranier <bgranier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 10:44:02 by bgranier          #+#    #+#             */
/*   Updated: 2026/03/02 10:58:53 by bgranier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	tot_bench(t_ctrl *c, int argc, char **argv)
{
	int	start;
	int	i;

	i = 0;
	start = 1;
	while (argv[i])
	{
		if (!ft_strcmp(argv[i], "--total"))
		{
			c->bench = 0;
			c->bench_tot = 1;
		}
	}
	while (start < argc && is_flag(argv[start]))
		start++;
}
