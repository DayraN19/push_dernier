/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatch_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranier <bgranier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:30:00 by bgranier          #+#    #+#             */
/*   Updated: 2026/02/05 13:54:11 by bgranier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	dispatch_sort(t_stack_node **a, t_stack_node **b, t_ctrl *c)
{
	if (c->strategy == STRAT_SIMPLE)
	{
		c->executed_strategy = STRAT_SIMPLE;
		sort_simple(a, b, c);
	}
	else if (c->strategy == STRAT_MEDIUM)
	{
		c->executed_strategy = STRAT_MEDIUM;
		sort_medium(a, b, c);
	}
	else if (c->strategy == STRAT_COMPLEX)
	{
		c->executed_strategy = STRAT_COMPLEX;
		sort_complex(a, b, c);
	}
	else
	{
		sort_adaptive(a, b, c);
	}
}
