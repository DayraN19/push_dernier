/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranier <bgranier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:47:58 by bgranier          #+#    #+#             */
/*   Updated: 2025/12/17 13:06:21 by bgranier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_stack_node	*ft_lstnew(void *content)
{
	t_stack_node	*elem;

	elem = malloc(sizeof(t_stack_node));
	if (!elem)
		return (NULL);
	elem->value = content;
	elem->next = NULL;
	return (elem);
}
