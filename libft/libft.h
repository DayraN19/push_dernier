/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranier <bgranier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:06:39 by bgranier          #+#    #+#             */
/*   Updated: 2026/01/20 13:34:31 by bgranier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>

# define U_MAX 4294967295
# define DEC_BASE "0123456789"
# define HEX_BASE_MIN "0123456789abcdef"
# define HEX_BASE_MAJ "0123456789ABCDEF"

int				ft_printf(const char *format, ...);
int				ft_check_space(const char *format);
int				ft_check_var(char format, va_list args);
int				ft_putchar(int c);
int				ft_print_ptr(char *base, void *ptr, size_t len);
int				ft_print_hex(unsigned int num, const char format);
int				ft_printpercent(void);
int				ft_putstr(char *str);
int				ft_putnbr_base(char *base, int nbr, int len);
int				ft_putnbr(int nbr);
void			ft_put_ptr(uintptr_t num);
int				ft_ptr_len(uintptr_t num);
char			*ft_uitoa(unsigned int n);
int				ft_num_len(unsigned	int num);
int				ft_len_nb(size_t nb, size_t len);
void			ft_put_hex(unsigned int num, const char format);
int				ft_hex_len(unsigned	int num);
int				ft_atoi(const char *nptr);
void			ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t nmemb, size_t size);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
char			*ft_itoa(int n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putendl_fd(char *s, int fd);
size_t			ft_strlen(const char *str);
void			*ft_memset(void *s, int c, size_t n);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_tolower(int c);
int				ft_toupper(int c);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
char			*ft_strrchr(const char *s, int c);
char			*ft_strnstr(const char *hayst, const char *needle, size_t len);
char			*ft_strchr(const char *s, int c);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_strdup(const char *src);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
char			**ft_split(char const *s, char c);

typedef struct s_stack_node
{
	int					value;
	int					index;
	int					target_pos;
	int					pos;
	int					cost_a;
	int					cost_b;
	struct s_stack_node	*next;
}	t_stack_node;

void			ft_lstadd_front(t_stack_node **alst, t_stack_node *new);
int				ft_lstsize(t_stack_node *lst);
t_stack_node	*ft_lstlast(t_stack_node *lst);
void			ft_lstadd_back(t_stack_node **alst, t_stack_node *new);
void			ft_lstdelone(t_stack_node *lst);
void			ft_lstclear(t_stack_node **lst);
void			ft_lstiter(t_stack_node *lst);

#endif