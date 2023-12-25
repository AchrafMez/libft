/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:33:40 by amezioun          #+#    #+#             */
/*   Updated: 2023/12/21 16:12:18 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *str;
    size_t i = 0;

    str = (unsigned char *)s;
    while (str[i] != '\0' && i < n)
    {
        if(str[i] == (unsigned char)c)
            return ((void *)str + i);
        i++;
    }
    return NULL;
}

// int main()
// {
//     char s[] = "bonjour";
//     int c = 'n';
//     printf("%c 
//     ...", 327);
// }