/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranier <bgranier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 15:41:56 by bgranier          #+#    #+#             */
/*   Updated: 2026/02/05 13:46:05 by bgranier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_stack_node **a, t_ctrl *c)
{
	int	f;
	int	s;
	int	t;

	if (!a || !*a || !(*a)->next || !(*a)->next->next)
		return ;
	f = (*a)->index;
	s = (*a)->next->index;
	t = (*a)->next->next->index;
	if (f > s && s < t && f < t)
		sa(a, c);
	else if (f > s && s > t)
	{
		sa(a, c);
		rra(a, c);
	}
	else if (f > s && s < t && f > t)
		ra(a, c);
	else if (f < s && s > t && f < t)
	{
		sa(a, c);
		ra(a, c);
	}
	else if (f < s && s > t && f > t)
		rra(a, c);
}
