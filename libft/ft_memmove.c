/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranier <bgranier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:26:00 by bgranier          #+#    #+#             */
/*   Updated: 2026/02/13 14:18:29 by bgranier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst2;
	unsigned char	*src2;

	dst2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	if (src < dest)
	{
		src2 = src2 + n - 1;
		dst2 = dst2 + n - 1;
		while (n--)
			*dst2-- = *src2--;
	}
	else if (src >= dest)
	{
		while (n--)
			*dst2++ = *src2++;
	}
	return (dest);
}
