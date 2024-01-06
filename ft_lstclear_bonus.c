/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 00:48:02 by amezioun          #+#    #+#             */
/*   Updated: 2024/01/06 22:38:10 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}

// {
// 	t_list	*tmp;

// 	if (!lst  || !del )
// 		return ;
// 	if (*lst)
// 	{
// 		while (*lst)
// 		{
// 			tmp = (*lst);
// 			*lst = (*lst)->next;
// 			ft_lstdelone(tmp, del);
// 		}
// 	}
// }
