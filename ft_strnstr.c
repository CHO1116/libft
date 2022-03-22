/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:10:47 by youngjch          #+#    #+#             */
/*   Updated: 2022/03/22 13:43:25 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == 0)
		return ((char *)haystack);
	if (ft_strlen(needle) <= ft_strlen(haystack) && ft_strlen(needle) <= len)
	{
		i = 0;
		while (haystack[i] != '\0' && i < len)
		{
			j = 0;
			while (needle[j] != '\0' && i + j < len)
			{
				if (haystack[i + j] == needle[j])
					j++;
				else
					break ;
				if (needle[j] == '\0')
					return ((char *)haystack + i);
			}
			i++;
		}
	}
	return (0);
}
