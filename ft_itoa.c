/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 13:50:02 by amezioun          #+#    #+#             */
/*   Updated: 2023/12/27 16:51:43 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int ncount(long n)
{
    int i = 0;
    
     if(n == 0)
        return 1;
       
    if(n < 0)
    {
        i++;
        n *= -1;
    }
   
    while (n > 0)
    {
        i++;
        n /= 10;
    }
    return i;
}

char *ft_itoa(int n)
{
    char *s;
    int len;
    int i = 0;
    len = ncount(n);
    s = malloc(len + 1);
    long nb = n;
    if(!s)
        return NULL;
    s[len] = '\0';
    if(nb < 0)
    {   
        nb *= -1;
        s[0] = '-';
    }
    if(nb == 0)
    {
        s[0] = '0';
    }
    while (--len >= 0 && nb)
    {
        s[len] = nb % 10 + '0';
        nb /= 10;
        i++;  
    }
    return s;
}

// int main()
// {
//    // ft_itoi(1400);
//    long n = 123156456;
//    long a = -0;
//    long b =  2147483647;
//    long z =  -2147483647;
//    long e = -10004;
//     printf("%s\n",ft_itoa(n));
//     printf("%s\n",ft_itoa(a));
//     printf("%s\n",ft_itoa(b));
//     printf("%s\n",ft_itoa(z));
//     printf("%s\n",ft_itoa(e));


// }