/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disorder.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpepin-l <lpepin-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 10:02:17 by bgranier          #+#    #+#             */
/*   Updated: 2026/03/02 08:58:53 by lpepin-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	compute_disorder_precise(t_stack_node *a)
{
	int				mistakes;
	int				total_pairs;
	t_stack_node	*i;
	t_stack_node	*j;

	mistakes = 0;
	total_pairs = 0;
	i = a;
	while (i)
	{
		j = i->next;
		while (j)
		{
			total_pairs++;
			if (i->value > j->value)
				mistakes++;
			j = j->next;
		}
		i = i->next;
	}
	if (total_pairs == 0)
		return (0);
	return ((mistakes * 10000 / total_pairs));
}

void	print_disorder_point(int disorder)
{
	int	integer_part;
	int	fraction_part;

	integer_part = disorder / 100;
	fraction_part = disorder % 100;
	ft_putstr_fd("Initial disorder: ", 2);
	ft_putnbr_fd(integer_part, 2);
	ft_putstr_fd(".", 2);
	if (fraction_part < 10)
		ft_putstr_fd("0", 2);
	ft_putnbr_fd(fraction_part, 2);
	ft_putstr_fd("%\n", 2);
}

