/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpepin-l <lpepin-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 15:09:55 by bgranier          #+#    #+#             */
/*   Updated: 2026/02/13 11:09:53 by lpepin-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_ctrl			c;
	t_stack_node	*a;
	t_stack_node	*b;
	int				start_arg;

	a = NULL;
	b = NULL;
	if (argc < 2)
		return (0);
	start_arg = handle_bench(&c, argc, argv);
	if (argc <= start_arg)
		return (0);
	init_stack_a(&a, &argv[start_arg]);
	index_stack(&a);
	ctrl_init(&c, a, b);
	c.strategy = STRAT_ADAPTIVE;
	select_strategy(&c, argv);
	dispatch_sort(&a, &b, &c);
	if (c.bench)
		print_bench(&c);
	free_stack(a);
	free_stack(b);
	return (0);
}

/* int	main(int argc, char **argv)
{
	t_ctrl			c;
	t_stack_node	*a;
	t_stack_node	*b;
	int				start_arg;

	a = NULL;
	b = NULL;
	start_arg = 1;
	if (argc < 2)
		return (0);
	c.bench = 0;
	c.strategy = STRAT_ADAPTIVE;
	if (!ft_strcmp(argv[1], "--bench"))
	{
		c.bench = 1;
		start_arg = 2;
	}
	while (start_arg < argc && is_flag(argv[start_arg]))
		start_arg++;
	if (argc <= start_arg)
		return (0);
	init_stack_a(&a, &argv[start_arg]);
	index_stack(&a);
	ctrl_init(&c, a, b);
	select_strategy(&c, argv);
	dispatch_sort(&a, &b, &c);
	if (c.bench)
		print_bench(&c);
	free_stack(a);
	free_stack(b);
	return (0);
} */