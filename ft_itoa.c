/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:07:12 by youngjch          #+#    #+#             */
/*   Updated: 2022/03/22 16:38:04 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_numlen(long int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

long int	ft_abs(long int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int n)
{
	int		len;
	int		flags;
	char	*n_arr;

	if (n < 0)
		flags = -1;
	else
		flags = 1;
	len = ft_numlen(n);
	n_arr = (char *)malloc(sizeof(char) * len + 1);
	if (!n_arr)
		return (0);
	n_arr[len] = '\0';
	len--;
	while (len >= 0)
	{
		n_arr[len] = '0' + ft_abs(n % 10);
		n = ft_abs(n / 10);
		len--;
	}
	if (flags == -1)
		n_arr[0] = '-';
	return (n_arr);
}
