/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 23:31:40 by amezioun          #+#    #+#             */
/*   Updated: 2024/01/06 16:19:58 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
	return ;
}

// void f(void *c)
// {
//     printf("%s\n", c);
// }

// int main()
// {
//     t_list *p;
//     p = ft_lstnew ("asdf");
//     p -> next = ft_lstnew ("asdf");
//     p -> next -> next = ft_lstnew ("asdf");
//     p -> next -> next -> next = ft_lstnew ("asdf");
//    ft_lstiter(p, f);
//     return (0);
// }