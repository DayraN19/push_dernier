/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranier <bgranier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 15:09:55 by bgranier          #+#    #+#             */
/*   Updated: 2026/03/02 13:48:16 by bgranier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_ctrl			c;
	t_stack_node	*a;
	t_stack_node	*b;
	int				start_arg;

	init_ab(&a, &b);
	if (argc < 2)
		return (0);
	start_arg = handle_bench(&c, argc, argv);
	if (argc <= start_arg)
		return (0);
	handle_error(argc - start_arg, &argv[start_arg]);
	init_stack_a(&a, &argv[start_arg]);
	index_stack(&a);
	ctrl_init(&c, a, b);
	tot_bench(&c, argv);
	c.strategy = STRAT_ADAPTIVE;
	select_strategy(&c, argv);
	dispatch_sort(&a, &b, &c);
	if (c.bench)
		print_bench(&c);
	if (c.bench_tot)
		print_total(&c);
	free_ab(a, b);
	return (0);
}
