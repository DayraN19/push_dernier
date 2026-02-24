/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranier <bgranier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:43:02 by bgranier          #+#    #+#             */
/*   Updated: 2025/12/17 13:23:09 by bgranier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_check_space(const char *format)
{
	int	i;

	i = 0;
	while (format[i] == ' ')
		i++;
	if (format[i] == '%')
	{
		while (format[i + 1] == ' ')
			i++;
		if (!format[i + 1])
			return (-1);
	}
	return (0);
}

int	ft_check_var(char format, va_list args)
{
	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'p')
		return (ft_print_ptr(HEX_BASE_MIN, va_arg(args, void *), 16));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 'u')
		return (ft_putnbr_base(DEC_BASE, va_arg(args, int), 10));
	else if (format == 'x')
		return (ft_putnbr_base(HEX_BASE_MIN, va_arg(args, int), 16));
	else if (format == 'X')
		return (ft_putnbr_base(HEX_BASE_MAJ, va_arg(args, int), 16));
	else if (format == '%')
		return (ft_putchar('%'));
	else
		return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	va_list	args;

	if (!format)
		return (0);
	i = 0;
	if (ft_check_space(format) == -1)
		return (-1);
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
			len += ft_check_var(format[++i], args);
		else
			len += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}
