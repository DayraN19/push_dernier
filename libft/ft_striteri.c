/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranier <bgranier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:21:27 by bgranier          #+#    #+#             */
/*   Updated: 2025/11/10 13:25:13 by bgranier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	cur;

	if (!s || !f)
		return ;
	cur = 0;
	while (s[cur])
	{
		(*f)(cur, &s[cur]);
		cur++;
	}
}
