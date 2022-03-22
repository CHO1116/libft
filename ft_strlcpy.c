/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:10:09 by youngjch          #+#    #+#             */
/*   Updated: 2022/03/22 17:38:49 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	src_len;

	index = 0;
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	while (src[index] != '\0' && index < (dstsize - 1))
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return (src_len);
}
