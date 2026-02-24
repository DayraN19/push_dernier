/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_complex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranier <bgranier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 13:22:57 by bgranier          #+#    #+#             */
/*   Updated: 2026/02/24 14:10:05 by bgranier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max_bits(t_stack_node **stack)
{
	t_stack_node	*head;
	int				max_bits;
	int				max;

	head = *stack;
	max = head->index;
	max_bits = 0;
	while (head)
	{
		if (head->index > max)
			max = head->index;
		head = head->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

int	is_sorted(t_stack_node **stack)
{
	t_stack_node	*current;

	if (!stack || !*stack)
		return (1);
	current = *stack;
	while (current->next)
	{
		if (current->value > current->next->value)
			return (0);
		current = current->next;
	}
	return (1);
}

void	index_stack(t_stack_node **stack)
{
	t_stack_node	*current;
	t_stack_node	*compare;
	int				index;

	current = *stack;
	while (current)
	{
		index = 0;
		compare = *stack;
		while (compare)
		{
			if (current->value > compare->value)
				index++;
			compare = compare->next;
		}
		current->index = index;
		current = current->next;
	}
}

void	sort_5complex(t_stack_node **a, t_stack_node **b, t_ctrl *n_op)
{
	int	size;

	size = ft_lstsize(*a);
	if (size == 3)
	{
		sort_3(a, n_op);
		return ;
	}
	else if (size > 3 && size <= 5)
	{
		sort_5(a, b, n_op);
		return ;
	}
}

void	sort_complex(t_stack_node **a, t_stack_node **b, t_ctrl *n_op)
{
	int	i;
	int	j;
	int	size;
	int	max;

	if (is_sorted(a))
		return ;
	index_stack(a);
	size = ft_lstsize(*a);
	max = get_max_bits(a);
	i = 0;
	while (i < max)
	{
		j = 0;
		while (j++ < size)
		{
			if ((((*a)->index >> i) & 1) == 1)
				ra(a, n_op);
			else
				pb(a, b, n_op);
		}
		while (ft_lstsize(*b))
			pa(a, b, n_op);
		i++;
	}
}
