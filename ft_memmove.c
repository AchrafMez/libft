/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:42:33 by amezioun          #+#    #+#             */
/*   Updated: 2023/12/28 20:25:06 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    char *dst;
    char *srcs;
    
    i = 0;
    dst = (char *)dest;
    srcs = (char *) src;
    
    if(dest > src)
    {
        while (n-- > 0)
        {
            dst[n] = srcs[n];
        }
    }
    while (i > n)
    {
        dst[i] = srcs[i];
        i++;
    }
    return (dst);
}

// int main()
// {
//     // char d[15] = '\0';
//     // char s[6] = "0xF0";
//     // char d1[15] = '\0';
//     // char s1[6] = "0xF0";
//     printf("%s\n", ft_memmove(NULL, "asdf", 10));
//     printf("%s", memmove(NULL, "asdf", 10));
// }