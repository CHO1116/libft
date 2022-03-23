/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 00:50:27 by youngjch          #+#    #+#             */
/*   Updated: 2022/03/23 14:40:12 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nxt;

	while (*lst != NULL)
	{
		nxt = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = nxt;
	}
	*lst = NULL;
}
