/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastiangranier <bastiangranier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 14:17:32 by bgranier          #+#    #+#             */
/*   Updated: 2026/01/15 11:06:13 by bastiangran      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_add_back(t_stack_node **stack, t_stack_node *new)
{
	t_stack_node	*tmp;

	if (!*stack)
	{
		*stack = new;
		return ;
	}
	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}

void	init_stack_a(t_stack_node **a, char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		stack_add_back(a, new_node(ft_atoi(argv[i])));
		i++;
	}
}
