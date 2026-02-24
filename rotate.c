/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranier <bgranier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 12:59:10 by bgranier          #+#    #+#             */
/*   Updated: 2026/01/20 12:59:23 by bgranier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_stack_node **b, t_ctrl *c)
{
	t_stack_node	*first;
	t_stack_node	*tmp;

	if (!b || !*b || !(*b)->next)
		return ;
	first = *b;
	*b = (*b)->next;
	first->next = NULL;
	tmp = *b;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = first;
	ft_printf("rb\n");
	c->count_rb++;
	c->count_op++;
}

void	rra(t_stack_node **a, t_ctrl *c)
{
	t_stack_node	*prev;
	t_stack_node	*last;

	if (!a || !*a || !(*a)->next)
		return ;
	prev = NULL;
	last = *a;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *a;
	*a = last;
	ft_printf("rra\n");
	c->count_rra++;
	c->count_op++;
}

void	rrb(t_stack_node **b, t_ctrl *c)
{
	t_stack_node	*prev;
	t_stack_node	*last;

	if (!b || !*b || !(*b)->next)
		return ;
	prev = NULL;
	last = *b;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *b;
	*b = last;
	ft_printf("rrb\n");
	c->count_rrb++;
	c->count_op++;
}

void	rrr(t_stack_node **a, t_stack_node **b, t_ctrl *c)
{
	rra(a, c);
	rrb(b, c);
	ft_printf("rrr\n");
	c->count_rrr++;
	c->count_op++;
}
