/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranier <bgranier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:45:57 by bgranier          #+#    #+#             */
/*   Updated: 2025/11/13 15:30:45 by bgranier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numwords(char const *s, char c)
{
	int	cur;
	int	word_num;

	cur = 0;
	word_num = 0;
	while (s[cur] != 0)
	{
		if (s[cur] != c && (s[cur + 1] == c || s[cur + 1] == 0))
			word_num++;
		cur++;
	}
	return (word_num);
}

static int	split_words(char **result, char const *s, char c, int word)
{
	int		st_cur;
	int		nd_cur;

	nd_cur = 0;
	st_cur = 0;
	while (s[nd_cur])
	{
		if (s[nd_cur] == c || s[nd_cur] == 0)
			st_cur = nd_cur + 1;
		if (s[nd_cur] != c && (s[nd_cur + 1] == c || s[nd_cur + 1] == 0))
		{
			result[word] = malloc(sizeof(char) * (nd_cur - st_cur + 2));
			if (!result[word])
			{
				while (word++)
					free(result[word]);
				return (0);
			}
			ft_strlcpy(result[word], (char *)(s + st_cur), nd_cur - st_cur + 2);
			word++;
		}
		nd_cur++;
	}
	result[word] = 0;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (numwords(s, c) + 1));
	if (!result)
		return (NULL);
	if (!split_words(result, s, c, 0))
		return (NULL);
	return (result);
}
