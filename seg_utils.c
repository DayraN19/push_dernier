/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   seg_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpepin-l <lpepin-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 13:28:13 by bgranier          #+#    #+#             */
/*   Updated: 2026/03/02 08:45:10 by lpepin-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sqrt(int n)
{
	int	i;

	i = 0;
	while (i * i < n)
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	sort_chunks(t_stack_node **a, t_stack_node **b, int chunk, t_ctrl *c)
{
	int	i;
	int	size;

	i = 0;
	size = stack_size(*a);
	if (size <= 1)
		return ;
	while (*a)
	{
		if ((*a)->index <= i)
		{
			pb(a, b, c);
			rb(b, c);
			i++;
		}
		else if ((*a)->index <= i + chunk)
		{
			pb(a, b, c);
			i++;
		}
		else
			ra(a, c);
	}
}

void	error_exit(void)
{
	ft_putendl_fd("Error", 2);
	exit(EXIT_FAILURE);
}
