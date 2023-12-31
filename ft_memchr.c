/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:33:40 by amezioun          #+#    #+#             */
/*   Updated: 2023/12/29 19:28:53 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((unsigned char *)(s + i));
		i++;
	}
	if ((unsigned char)c == '\0' && *(unsigned char *)(s + i) == '\0')
		return ((unsigned char *)(s + i));
	return (NULL);
}

// int main()
// {
//     char s[] = "bonjour";
//     int c = 'n';
//     printf("%c
//     ...", 327);
// }