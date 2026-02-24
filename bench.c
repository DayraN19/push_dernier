/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranier <bgranier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 13:02:27 by bgranier          #+#    #+#             */
/*   Updated: 2026/02/24 13:24:34 by bgranier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_bench(t_ctrl *c)
{
	print_disorder_point(c->count_disorder);
	ft_printf("[bench] Strategy: %s", strategy_name(c->strategy));
	if (c->strategy == STRAT_ADAPTIVE)
	{
		ft_printf(" | %s | %s\n",
			strategy_name(c->executed_strategy),
			strategy_complexity(c->executed_strategy)
			);
	}
	else
		ft_printf(" | %s\n", strategy_complexity(c->strategy));
	ft_printf("[bench] total_ops: %d\n", c->count_op);
	ft_printf("[bench] sa: %d, sb: %d, ss: %d, pa: %d, pb: %d\n",
		c->count_sa, c->count_sb, c->count_ss, c->count_pa, c->count_pb);
	ft_printf("[bench] ra: %d, rb: %d, rr: %d, rra: %d, rrb: %d, rrr: %d\n",
		c->count_ra, c->count_rb, c->count_rr,
		c->count_rra, c->count_rrb, c->count_rrr);
}
