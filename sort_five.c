/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranier <bgranier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 10:41:31 by bgranier          #+#    #+#             */
/*   Updated: 2026/02/24 13:54:28 by bgranier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_min_pos(t_stack_node *a)
{
	int	pos;
	int	min;
	int	i;

	pos = 0;
	min = a->index;
	i = 0;
	while (a)
	{
		if (a->index < min)
		{
			min = a->index;
			pos = i;
		}
		a = a->next;
		i++;
	}
	return (pos);
}

void	sort_5(t_stack_node **a, t_stack_node **b, t_ctrl *c)
{
	int	size;
	int	pos;

	size = ft_lstsize(*a);
	while (size > 3)
	{
		pos = find_min_pos(*a);
		if (pos <= size / 2)
			while (pos-- > 0)
				ra(a, c);
		else
			while (pos++ < size)
				rra(a, c);
		pb(a, b, c);
		size--;
	}
	sort_3(a, c);
	while (*b)
		pa(a, b, c);
}
