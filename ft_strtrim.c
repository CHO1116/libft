/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:11:06 by youngjch          #+#    #+#             */
/*   Updated: 2022/03/23 16:43:54 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	size_t	s_len;
	size_t	front;
	size_t	end;

	if (!s1 || !set)
		return (0);
	if (*s1 == '\0' || *set == '\0')
		return (ft_strdup(s1));
	s_len = ft_strlen(s1);
	front = 0;
	end = s_len;
	while (end > 0 && ft_strchr(set, s1[end - 1]) != NULL)
		end--;
	while (front < end && ft_strchr(set, s1[front]) != NULL)
		front++;
	new_str = ft_substr(s1, front, end - front);
	return (new_str);
}
