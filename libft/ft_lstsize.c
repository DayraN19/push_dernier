/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranier <bgranier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:48:01 by bgranier          #+#    #+#             */
/*   Updated: 2025/12/17 12:50:39 by bgranier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_stack_node *lst)
{
	int	cur;

	cur = 0;
	while (lst)
	{
		cur++;
		lst = lst->next;
	}
	return (cur);
}
