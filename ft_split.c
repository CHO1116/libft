/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:09:23 by youngjch          #+#    #+#             */
/*   Updated: 2022/03/23 18:50:47 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	**malloc_free(char **result, size_t idx)
{
	size_t	i;

	i = 0;
	while (i < idx)
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}

static size_t	cnt_s(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (s[i] && s[i] != c)
	{
		i++;
		count++;
	}
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != 0 && s[i + 1] != c)
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	idx;
	size_t	i;
	size_t	start;

	result = (char **)malloc(sizeof(char *) * (cnt_s(s, c) + 1));
	if (!s || !result)
		return (0);
	i = 0;
	idx = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			result[idx] = (char *)malloc(sizeof(char) * (i - start + 1));
			if (!result[idx])
				return (malloc_free(result, idx));
			ft_strlcpy(result[idx++], &s[start], i - start + 1);
		}
		else
			i++;
	}
	result[idx] = 0;
	return (result);
}
