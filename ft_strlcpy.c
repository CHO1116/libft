/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:10:09 by youngjch          #+#    #+#             */
/*   Updated: 2022/03/11 22:06:47 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	cnt;

	index = 0;
	cnt = 0;
	if (dst == 0 || src == 0)
		return (0);
	while (src[cnt] != '\0')
		cnt++;
	if (dstsize != 0)
	{
		while (src[index] != '\0' && index < (dstsize - 1))
		{
			dst[index] = src [index];
			index++;
		}
		dst[index] = '\0';
	}
	return (cnt);
}
