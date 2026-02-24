/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranier <bgranier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 12:26:33 by bgranier          #+#    #+#             */
/*   Updated: 2026/02/13 14:20:24 by bgranier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*news;
	size_t	size;
	size_t	i;

	if (!s)
		return (0);
	size = ft_strlen(s);
	if (start >= size)
		return ((char *)ft_calloc(sizeof(char), 1));
	if (len >= size)
		len = size - start;
	news = ft_calloc(sizeof(char), len + 1);
	if (!news)
		return (0);
	i = 0;
	while (i < len)
	{
		news[i] = s[start + i];
		i++;
	}
	news[i] = '\0';
	return (news);
}
