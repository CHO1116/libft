/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:09:30 by youngjch          #+#    #+#             */
/*   Updated: 2022/03/21 16:17:01 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char *src;
	size_t len;

	src = s;
	len  = ft_strlen(src);
	while (len--)
	{
		if (*src == (unsigned char)c)
			return (src);
		src++;
	}
	return (0);
}
