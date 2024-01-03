/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_lstadd_front_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 20:14:49 by amezioun          #+#    #+#             */
/*   Updated: 2024/01/02 04:27:11 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    new -> next = *lst;
    *lst = new;    
}

int main()
{
    t_list *head;
    head = ft_lstnew("born");
    head -> next = ft_lstnew("2");
    head -> next -> next = ft_lstnew("code");
    head -> next -> next ->next = ft_lstnew("haa");
    t_list *new;
    new = ft_lstnew("new");
    ft_lstadd_front(&head, new);
    while (head != NULL)
    {
        printf("%s\n", head -> content);
        head = head -> next;
    }
    return 0;
}