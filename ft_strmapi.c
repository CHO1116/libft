/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:10:27 by youngjch          #+#    #+#             */
/*   Updated: 2022/03/22 19:12:02 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	num;
	size_t			len;
	char			*src;

	if (!s || !f)
		return (0);
	num = 0;
	len = ft_strlen(s);
	src = (char *)malloc(sizeof(char) * (len + 1));
	if (!src)
		return (0);
	while (s[num] != '\0')
	{
		src[num] = f(num, s[num]);
		num++;
	}
	src[num] = '\0';
	return (src);
}
