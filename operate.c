/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranier <bgranier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 12:12:27 by bgranier          #+#    #+#             */
/*   Updated: 2026/01/20 12:59:06 by bgranier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack_node **a, t_ctrl *c)
{
	t_stack_node	*first;
	t_stack_node	*second;

	if (!a || !*a || !(*a)->next)
		return ;
	first = *a;
	second = (*a)->next;
	first->next = second->next;
	second->next = first;
	*a = second;
	ft_printf("sa\n");
	c->count_sa++;
	c->count_op++;
}

void	sb(t_stack_node **b, t_ctrl *c)
{
	t_stack_node	*first;
	t_stack_node	*second;

	if (!b || !*b || !(*b)->next)
		return ;
	first = *b;
	second = (*b)->next;
	first->next = second->next;
	second->next = first;
	*b = second;
	ft_printf("sb\n");
	c->count_sb++;
	c->count_op++;
}

void	pa(t_stack_node **a, t_stack_node **b, t_ctrl *c)
{
	t_stack_node	*tmp;

	if (!b || !*b)
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = *a;
	*a = tmp;
	ft_printf("pa\n");
	c->count_pa++;
	c->count_op++;
}

void	pb(t_stack_node **a, t_stack_node **b, t_ctrl *c)
{
	t_stack_node	*tmp;

	if (!a || !*a)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = *b;
	*b = tmp;
	ft_printf("pb\n");
	c->count_pb++;
	c->count_op++;
}

void	ra(t_stack_node **a, t_ctrl *c)
{
	t_stack_node	*first;
	t_stack_node	*tmp;

	if (!a || !*a || !(*a)->next)
		return ;
	first = *a;
	*a = (*a)->next;
	first->next = NULL;
	tmp = *a;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = first;
	ft_printf("ra\n");
	c->count_ra++;
	c->count_op++;
}
