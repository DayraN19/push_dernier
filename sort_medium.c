/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpepin-l <lpepin-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 15:54:28 by bgranier          #+#    #+#             */
/*   Updated: 2026/03/02 08:43:57 by lpepin-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_medium(t_stack_node **a, t_stack_node **b, t_ctrl *n_op)
{
	int	size;

	size = ft_lstsize(*a);
	assign_index(*a);
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
	p_to_b(a, b, size, n_op);
	while (*b)
	{
		bring_max_to_top_b(b, n_op);
		pa(a, b, n_op);
	}
}
