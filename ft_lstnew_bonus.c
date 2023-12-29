/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 19:48:14 by amezioun          #+#    #+#             */
/*   Updated: 2023/12/29 20:49:05 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

    struct node
    {
        int data;
        struct node *link;
    };
t_list *ft_lstnew(void *content)
{
    
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head ->data = content;
    head->link = NULL;
    return head->data;
}

//     struct node {
//         int data;
//         struct node *link;
//     };
    
// int main(){
//     struct node *head = NULL;
//     head = (struct node *)malloc(sizeof(struct node));
//     head ->data = 520;
//     head ->link = NULL;
//     printf("%d", head->data);
// }