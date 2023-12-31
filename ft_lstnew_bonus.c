/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 19:48:14 by amezioun          #+#    #+#             */
/*   Updated: 2023/12/30 15:21:40 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

    // struct node
    // {
    //     int data;
    //     struct node *link;
    // };
t_list *ft_lstnew(void *content)
{
    t_list *head;
    head = malloc(sizeof(head));
    head ->content = content;
    head ->next = NULL;
    return head;
}

//     struct node {
//         int data;
//         struct node *link;
//     };
    
int main(){
    // struct node *head = NULL;
    // head = (struct node *)malloc(sizeof(struct node));
    // head ->data = 520;
    // head ->link = NULL;
    void *s = "adsf";
    printf("%s", ft_lstnew(s));
}