/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 19:48:14 by amezioun          #+#    #+#             */
/*   Updated: 2024/01/03 23:10:00 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>


t_list *ft_lstnew(void *content)
{
    t_list *head;
    head = malloc(sizeof(t_list));
    head ->content = content;
    head ->next = NULL;

    return head;
}

// int main()
// {
//     t_list *head;
//     head = ft_lstnew("hello");
//     printf("%s\n", head->content);
//     return 0;
// }