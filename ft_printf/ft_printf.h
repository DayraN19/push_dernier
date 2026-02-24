/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastiangranier <bastiangranier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 14:32:01 by bgranier          #+#    #+#             */
/*   Updated: 2026/02/04 10:27:35 by bastiangran      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

# define U_MAX 4294967295
# define DEC_BASE "0123456789"
# define HEX_BASE_MIN "0123456789abcdef"
# define HEX_BASE_MAJ "0123456789ABCDEF"

int		ft_printf(const char *format, ...);
int		ft_check_space(const char *format);
int		ft_check_var(char format, va_list args);
int		ft_putchar(int c);
int		ft_print_ptr(char *base, void *ptr, size_t len);
int		ft_print_hex(unsigned int num, const char format);
int		ft_printpercent(void);
void	ftputchar_fd(char c);
int		ft_putstr(char *str);
int		ft_putnbr_base(char *base, int nbr, int len);
int		ft_putnbr(int nbr);
void	ft_put_ptr(uintptr_t num);
int		ft_ptr_len(uintptr_t num);
char	*ft_uitoa(unsigned int n);
int		ft_num_len(unsigned	int num);
int		ft_len_nb(size_t nb, size_t len);
void	ft_put_hex(unsigned int num, const char format);
int		ft_hex_len(unsigned	int num);

#endif