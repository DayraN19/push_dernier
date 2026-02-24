/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strategy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastiangranier <bastiangranier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 13:31:15 by bgranier          #+#    #+#             */
/*   Updated: 2026/02/05 12:56:43 by bastiangran      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	select_strategy(t_ctrl *c, char **av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if (!ft_strcmp(av[i], "--simple"))
			c->strategy = STRAT_SIMPLE;
		else if (!ft_strcmp(av[i], "--medium"))
			c->strategy = STRAT_MEDIUM;
		else if (!ft_strcmp(av[i], "--complex"))
			c->strategy = STRAT_COMPLEX;
		else if (!ft_strcmp(av[i], "--adaptive"))
			c->strategy = STRAT_ADAPTIVE;
		i++;
	}
}

const char	*strategy_name(int strat)
{
	if (strat == STRAT_SIMPLE)
		return ("SIMPLE");
	if (strat == STRAT_MEDIUM)
		return ("MEDIUM");
	if (strat == STRAT_COMPLEX)
		return ("COMPLEX");
	if (strat == STRAT_ADAPTIVE)
		return ("ADAPTIVE");
	return ("UNKNOWN");
}

const char	*strategy_complexity(int strat)
{
	if (strat == STRAT_SIMPLE)
		return ("O(n²)");
	if (strat == STRAT_MEDIUM)
		return ("O(n√n)");
	if (strat == STRAT_COMPLEX)
		return ("O(n log n)");
	return ("?");
}
