/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:53:07 by amezioun          #+#    #+#             */
/*   Updated: 2023/12/29 18:44:34 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    char *new;
    int i;
    int slen;
    int nsize;
    int j;
    
    j = 0;
    i = 0;
    slen = ft_strlen(s1);
    
     if (!s1)
        return NULL;
    if(!set)
         return(ft_strdup(s1));
    if (ft_strlen(s1) == 0 && ft_strlen(set) == 0)
        return(ft_strdup(""));
    while (s1[i] && ft_strchr(set, s1[i]))
        i++;
    while (slen >= 0 && ft_strchr(set, s1[slen]))
        slen--;
    if (i > slen)
        return(ft_strdup(""));
    nsize = (slen - i) + 1;
    // printf("%d", nsize);
    new = malloc((nsize + 1) * sizeof(char));
    if(!new)
        return(NULL);
    while (i <= slen)
    {
        new[j] = s1[i];
        i++;
        j++;
    }
    new[j] = '\0';
    return new;
}

// int main()
// {
//     char s[] = "aeaedaeaeae";
//     char set[] = "ae";
//     printf("%s\n", ft_strtrim(s, set));
// }