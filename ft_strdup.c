/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:02:32 by amezioun          #+#    #+#             */
/*   Updated: 2023/12/21 17:42:40 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"


char *ft_strdup(const char *s1)
{
    char *str;    
    int i;
    int strlen;

    i = 0;
    strlen = ft_strlen(s1);
    str = malloc(strlen + 1);
    if(str == NULL)
        return NULL;
    while (s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    str[i] = '\0';
    return str;
}