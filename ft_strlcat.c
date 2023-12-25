/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 23:36:37 by amezioun          #+#    #+#             */
/*   Updated: 2023/12/15 18:02:58 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include "libft.h"

// size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
//     size_t dstlen;
    
//     size_t i = 0;
//     dstlen = ft_strlen(dst);
    
//     int j = dstlen - dstsize;
//     printf("%d", j);
//     size_t countspace = (dstsize - dstlen);
//         while (src[i] && i < j - 1)
//         {
//                 dst[j + i] = src[i];
//                 i++;
//         }
//         dst[j + i] = '\0';
//     return (j + i); 
// }

// int main()
// {
//     char d[100] = "pqrstuvwxyz";
//     const char s[] = "abcd";
//     size_t dstsize = 3;
//     char d1[100] = "pqrstuvwxyz";
//     const char s1[] = "abcd";
//     printf("%zu || %s\n", ft_strlcat(d, s, dstsize), d);
//     printf("%zu || %s", strlcat(d1, s1, 3), d);
// }
