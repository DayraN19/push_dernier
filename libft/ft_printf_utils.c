/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranier <bgranier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:42:32 by bgranier          #+#    #+#             */
/*   Updated: 2025/12/17 13:23:14 by bgranier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len_nb(size_t nb, size_t len)
{
	int	i;

	i = 1;
	if (nb < 0)
	{
		nb = -nb;
		i++;
	}
	while (nb >= len)
	{
		nb /= len;
		i++;
	}
	return (i);
}

int	ft_putnbr(int nbr)
{
	long	nb;
	int		len_ret;

	nb = nbr;
	len_ret = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		len_ret++;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
	return (ft_len_nb(nb, 10) + len_ret);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (write (1, "(null)", 6));
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_putnbr_base(char *base, int nbr, int len)
{
	long	nb;
	size_t	len_ret;

	nb = nbr;
	if (nbr < 0)
	{
		nb = U_MAX + nbr + 1;
		len_ret = ft_len_nb(nb, len);
	}
	else
	{
		nb = nbr;
		len_ret = ft_len_nb(nb, len);
	}
	if (nb >= len)
		ft_putnbr_base(base, nb / len, len);
	ft_putchar(base[nb % len]);
	return (len_ret);
}
