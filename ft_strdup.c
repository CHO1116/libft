/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:09:37 by youngjch          #+#    #+#             */
/*   Updated: 2022/03/13 01:27:02 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*dest;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!dest)
		return (0);
	else
	{
		i = 0;
		while (s1[i] != '\0')
		{
			dest[i] = s1[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}
