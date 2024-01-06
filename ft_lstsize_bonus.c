/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 20:14:08 by amezioun          #+#    #+#             */
/*   Updated: 2024/01/06 22:35:43 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)

{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// int main()
// {
//     t_list *p;
//     p = ft_lstnew ("asdf");
//     p -> next = ft_lstnew ("asdf");
//     p -> next -> next = ft_lstnew ("asdf");
//     p -> next -> next -> next = ft_lstnew ("asdf");

//     printf("%d\n", ft_lstsize(p));
//     return (0);
// }