/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 17:18:31 by amezioun          #+#    #+#             */
/*   Updated: 2023/12/16 17:43:48 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;
	char	ch;

	i = 0;
	str = (char *)s;
	ch = (char)c;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}
// int main()
// {
//     char str[] = "born2code";
//     //printf("before :%s\n", str);
//    // printf("after :%s", memset(str, 'z', 1));
//     printf("after :%s", ft_memset(str, 'z', 5));

// }