/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranier <bgranier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 14:47:02 by bgranier          #+#    #+#             */
/*   Updated: 2026/03/02 12:43:18 by bgranier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

static int	ft_is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

static int	is_valid_number(char *arg)
{
	int	i;

	i = 0;
	if (arg[i] == '+' || arg[i] == '-')
		i++;
	if (arg[i] == '\0')
		return (0);
	while (arg[i])
	{
		if (!ft_is_digit(arg[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	is_in_int_range(char *arg)
{
	long long	nb;
	int			sign;
	int			i;

	nb = 0;
	sign = 1;
	i = 0;
	if (arg[i] == '+' || arg[i] == '-')
	{
		if (arg[i] == '-')
			sign = -1;
		i++;
	}
	while (arg[i])
	{
		nb = (nb * 10) + (arg[i] - '0');
		if (sign == 1 && nb > INT_MAX)
			return (0);
		if (sign == -1 && (-nb) < INT_MIN)
			return (0);
		i++;
	}
	return (1);
}

void	handle_error(int argc, char **argv)
{
	int		i;
	int		j;
	long	val;

	i = 0;
	while (i < argc)
	{
		if (!is_valid_number(argv[i]) || !is_in_int_range(argv[i]))
			error_exit();
		i++;
	}
	i = 0;
	while (i < argc)
	{
		val = ft_atoi(argv[i]);
		j = i + 1;
		while (j < argc)
		{
			if ((long)ft_atoi(argv[j]) == val)
				error_exit();
			j++;
		}
		i++;
	}
}
