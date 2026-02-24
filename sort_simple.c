/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_simple.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranier <bgranier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 13:24:42 by bgranier          #+#    #+#             */
/*   Updated: 2026/02/05 13:57:41 by bgranier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_simple(t_stack_node **a, t_stack_node **b, t_ctrl *c)
{
	int	size;

	if (!a || !*a || !c)
		return ;
	c->executed_strategy = STRAT_SIMPLE;
	size = stack_size(*a);
	if (size <= 1)
		return ;
	if (size == 2)
	{
		if ((*a)->index > (*a)->next->index)
			sa(a, c);
	}
	else if (size == 3)
		sort_3(a, c);
	else
		sort_5(a, b, c);
	c->size_a = stack_size(*a);
	c->size_b = stack_size(*b);
}
