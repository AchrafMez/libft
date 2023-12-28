/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:11:01 by amezioun          #+#    #+#             */
/*   Updated: 2023/12/28 20:28:29 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    char *new;
    int s1len;
    int s2len;
    int len;
    int i = 0;
    int j = 0;
    
    s1len = ft_strlen(s1);
    s2len = ft_strlen(s2);
    len = s1len + s2len;
    new = malloc(len + 1);

    if(!new)
        return NULL;
    while (s1[i] != '\0')
    {
        new[i] = s1[i];
        i++;
    }
    while (s2[j] != '\0')
    {
        new[i +j] = s2[j];
        j++;
    }
    new[i + j] = '\0';
    return new;
}
