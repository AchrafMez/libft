/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 00:45:52 by amezioun          #+#    #+#             */
/*   Updated: 2024/01/04 23:22:56 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// int main()
// {
//     t_list *lst;
//     t_list *new;
//     t_list *last;

//     lst = ft_lstnew("lst");
//     new = ft_lstnew("new");
//     last = ft_lstnew("last");
//     printf("%s\n", ft_lstlast(lst)->content);
//     return (0);
// }