/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranier <bgranier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 13:20:43 by ajordan-          #+#    #+#             */
/*   Updated: 2025/11/20 16:43:16 by bgranier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(char *base, size_t p, size_t len)
{
	if (p >= len)
		ft_putptr(base, p / len, len);
	ft_putchar(base[p % len]);
}

int	ft_print_ptr(char *base, void *ptr, size_t len)
{
	size_t		len_ret;

	len_ret = 0;
	if (!ptr)
		return (ft_putstr("(nil)"));
	len_ret += ft_putstr("0x");
	len_ret += ft_len_nb((size_t)ptr, len);
	ft_putptr(base, (size_t)ptr, len);
	return (len_ret);
}
