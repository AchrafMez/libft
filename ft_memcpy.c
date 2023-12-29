/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:10:31 by amezioun          #+#    #+#             */
/*   Updated: 2023/12/29 18:47:12 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i = 0;
    char *dst;
    char *srcs;
    
    dst = (char *)dest;
    srcs = (char *)src;
    if(!dst && !srcs)
        return (0);
    if(dest == src)
        return (dst);
    while (i < n)
    {
        dst[i] = srcs[i];
        i++;
    }
 //   dst[i] = '\0';
    return (dest);
}

// int main()
// {
//     char d[] = "cdefg";
//     char s[]= "abcdefg";
//    // printf("%s", ft_memcpy(d, s, 10));
//     printf("%s", memcpy(d, s, 3));

// }