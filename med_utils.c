/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   med_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranier <bgranier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 13:44:40 by bgranier          #+#    #+#             */
/*   Updated: 2026/02/13 14:15:30 by bgranier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	roud(double x)
{
	if (x >= 0)
		return ((int)(x + 0.5));
	else
		return ((int)(x - 0.5));
}

void	p_to_b(t_stack_node **a, t_stack_node **b,
	int s, t_ctrl *n_op)
{
	int	i;
	int	chunk;

	i = 0;
	chunk = roud(ft_sqrt(s));
	while (*a)
	{
		if ((*a)->index <= i)
		{
			pb(a, b, n_op);
			rb(b, n_op);
			i++;
		}
		else if ((*a)->index <= i + chunk)
		{
			pb(a, b, n_op);
			i++;
		}
		else
			ra(a, n_op);
	}
}

int	get_max_index_pos(t_stack_node *stack)
{
	int	max_idx;
	int	pos;
	int	i;

	if (!stack)
		return (-1);
	max_idx = stack->index;
	pos = 0;
	i = 0;
	while (stack)
	{
		if (stack->index > max_idx)
		{
			max_idx = stack->index;
			pos = i;
		}
		stack = stack->next;
		i++;
	}
	return (pos);
}

void	bring_max_to_top_b(t_stack_node **b, t_ctrl *n_op)
{
	int	pos;
	int	size;
	int	rot;

	if (!b || !*b)
		return ;
	size = ft_lstsize(*b);
	pos = get_max_index_pos(*b);
	if (pos == 0)
		return ;
	if (pos <= size / 2)
	{
		while (pos--)
			rb(b, n_op);
	}
	else
	{
		rot = size - pos;
		while (rot--)
			rrb(b, n_op);
	}
}

void	assign_index(t_stack_node *stack_a)
{
	t_stack_node	*current;
	t_stack_node	*compare;
	int				index;

	current = stack_a;
	while (current)
	{
		index = 0;
		compare = stack_a;
		while (compare)
		{
			if (compare->value < current->value)
				index++;
			compare = compare->next;
		}
		current->index = index;
		current = current->next;
	}
}
