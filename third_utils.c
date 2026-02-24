/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   third_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranier <bgranier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 13:30:08 by bgranier          #+#    #+#             */
/*   Updated: 2026/01/30 15:56:56 by bgranier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	handle_bench(t_ctrl *c, int argc, char **argv)
{
	int	start;

	c->bench = 0;
	start = 1;
	if (!ft_strcmp(argv[1], "--bench"))
	{
		c->bench = 1;
		start = 2;
	}
	while (start < argc && is_flag(argv[start]))
		start++;
	return (start);
}
