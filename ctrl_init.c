/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctrl_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastiangranier <bastiangranier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 14:08:44 by bgranier          #+#    #+#             */
/*   Updated: 2026/02/05 12:40:22 by bastiangran      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ctrl_init(t_ctrl *c, t_stack_node *a, t_stack_node *b)
{
	if (!c)
		return ;
	c->count_op = 0;
	c->count_ra = 0;
	c->count_rb = 0;
	c->count_rr = 0;
	c->count_rra = 0;
	c->count_rrb = 0;
	c->count_rrr = 0;
	c->count_pa = 0;
	c->count_pb = 0;
	c->count_sa = 0;
	c->count_sb = 0;
	c->count_ss = 0;
	c->executed_strategy = 0;
	c->first = a;
	c->last = b;
	c->count_disorder = compute_disorder_precise(c->first);
	c->size_a = stack_size(a);
	c->size_b = stack_size(b);
}
