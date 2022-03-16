/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:09:02 by youngjch          #+#    #+#             */
/*   Updated: 2022/03/16 17:37:52 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_recursive_nbr(int n, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	ft_recursive_nbr(n, fd);
}

void	ft_recursive_nbr(int n, int fd)
{
	if (n >= 10)
		ft_recursive_nbr(n / 10, fd);
	write(fd, &"0123456789"[n % 10], 1);
}
