/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 19:15:20 by amezioun          #+#    #+#             */
/*   Updated: 2023/12/21 17:44:50 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i = 0;
    size_t size = ft_strlen(s);
    char *new;
    
    if (*s == 0 || start > (unsigned int)(size - 1))
        return ft_strdup("");
    if (len <= (size - start))
        new = malloc(len + 1);
    else
        new = malloc((size - start) + 1); 
    if(!new)
        return NULL;
    while (s[i + start] &&( i < len))
    {
        new[i] = s[start + i];
        i++;
    }
    new[i] = '\0';
    return new;
}

