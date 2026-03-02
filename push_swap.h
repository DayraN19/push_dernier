/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranier <bgranier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 15:10:08 by bgranier          #+#    #+#             */
/*   Updated: 2026/03/02 12:46:37 by bgranier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "ft_printf/ft_printf.h"
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stddef.h>

typedef enum e_strategy
{
	STRAT_SIMPLE,
	STRAT_MEDIUM,
	STRAT_COMPLEX,
	STRAT_ADAPTIVE
}	t_strategy;

typedef struct s_ctrl
{
	int				count_op;
	int				count_rra;
	int				count_rrb;
	int				count_rrr;
	int				count_pa;
	int				count_pb;
	int				count_sa;
	int				count_sb;
	int				count_ss;
	int				count_ra;
	int				count_rb;
	int				count_rr;
	int				print_ops;
	int				bench;
	int				bench_tot;
	int				executed_strategy;
	t_strategy		strategy;
	float			count_disorder;
	int				size_a;
	int				size_b;
	t_stack_node	*first;
	t_stack_node	*last;
}	t_ctrl;

t_stack_node	*new_node(int value);
void			stack_add_back(t_stack_node **stack, t_stack_node *new);
void			init_stack_a(t_stack_node **a, char **argv);
int				stack_size(t_stack_node *stack);
int				stack_sorted(t_stack_node *a);
void			index_stack(t_stack_node **stack);
int				is_sorted(t_stack_node **stack);
void			free_stack(t_stack_node *stack);
void			print_stack(t_stack_node *stack);
t_stack_node	*get_stack_bottom(t_stack_node *stack);
t_stack_node	*get_stack_before_bottom(t_stack_node *stack);
void			sa(t_stack_node **a, t_ctrl *c);
void			sb(t_stack_node **b, t_ctrl *c);
void			pa(t_stack_node **a, t_stack_node **b, t_ctrl *c);
void			pb(t_stack_node **a, t_stack_node **b, t_ctrl *c);
void			ra(t_stack_node **a, t_ctrl *c);
void			rb(t_stack_node **b, t_ctrl *c);
void			rra(t_stack_node **a, t_ctrl *c);
void			rrb(t_stack_node **b, t_ctrl *c);
void			rrr(t_stack_node **a, t_stack_node **b, t_ctrl *c);
void			error_exit(void);
void			sort_complex(t_stack_node **a, t_stack_node **b, t_ctrl *n_op);
int				get_max_bits(t_stack_node **stack);
void			move_min_to_top(t_stack_node **a, t_ctrl *c);
void			sort_simple(t_stack_node **a, t_stack_node **b, t_ctrl *c);
void			sort_adaptive(t_stack_node **a, t_stack_node **b, t_ctrl *c);
int				compute_disorder_precise(t_stack_node *a);
void			dispatch_sort(t_stack_node **a, t_stack_node **b, t_ctrl *c);
void			sort_3(t_stack_node **a, t_ctrl *c);
void			ctrl_init(t_ctrl *c, t_stack_node *a, t_stack_node *b);
void			print_bench(t_ctrl *c);
void			select_strategy(t_ctrl *c, char **av);
int				handle_bench(t_ctrl *c, int argc, char **argv);
int				get_chunk_size(int size);
void			sort_5(t_stack_node **a, t_stack_node **b, t_ctrl *c);
void			sort_chunks(t_stack_node **a, t_stack_node **b,
					int chunk, t_ctrl *c);
void			push_chunks(t_stack_node **a, t_stack_node **b,
					t_ctrl *c, int chunk);
void			push_back(t_stack_node **a, t_stack_node **b, t_ctrl *c);
int				find_first_number(int argc, char **argv);
int				is_flag(char *arg);
const char		*strategy_name(int strat);
const char		*strategy_complexity(int strat);
int				ft_sqrt(int n);
int				ft_strcmp(char *s1, char *s2);
void			print_disorder_point(int disorder);
void			bring_max_to_top_b(t_stack_node **b, t_ctrl *n_op);
void			assign_index(t_stack_node *stack_a);
void			sort_medium(t_stack_node **a, t_stack_node **b, t_ctrl *n_op);
int				get_max_index_pos(t_stack_node *stack);
void			p_to_b(t_stack_node **a, t_stack_node **b, int s, t_ctrl *n_op);
int				roud(double x);
void			sort_5complex(t_stack_node **a, t_stack_node **b, t_ctrl *n_op);
void			handle_error(int argc, char **argv);
int				get_max(t_stack_node *a);
void			tot_bench(t_ctrl *c, char **argv);
void			print_total(t_ctrl *c);
void			free_ab(t_stack_node *a, t_stack_node *b);
void			init_ab(t_stack_node **a, t_stack_node **b);
#endif
