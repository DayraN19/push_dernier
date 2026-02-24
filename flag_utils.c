/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranier <bgranier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 12:53:21 by bgranier          #+#    #+#             */
/*   Updated: 2026/01/20 12:54:33 by bgranier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_flag(char *arg)
{
	return (!ft_strcmp(arg, "--bench")
		|| !ft_strcmp(arg, "--simple")
		|| !ft_strcmp(arg, "--medium")
		|| !ft_strcmp(arg, "--complex")
		|| !ft_strcmp(arg, "--adaptive"));
}

int	find_first_number(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc && is_flag(argv[i]))
		i++;
	return (i);
}
