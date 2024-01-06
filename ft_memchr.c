/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:33:40 by amezioun          #+#    #+#             */
/*   Updated: 2024/01/05 20:10:52 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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