/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranier <bgranier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 12:55:47 by bgranier          #+#    #+#             */
/*   Updated: 2026/02/13 10:00:03 by bgranier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* void	index_stack(t_stack_node *a)
{
	t_stack_node	*i;
	t_stack_node	*j;
	int				index;

	i = a;
	while (i)
	{
		index = 0;
		j = a;
		while (j)
		{
			if (j->value < i->value)
				index++;
			j = j->next;
		}
		i->index = index;
		i = i->next;
	}
} */
