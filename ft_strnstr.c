/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 20:12:17 by amezioun          #+#    #+#             */
/*   Updated: 2024/01/07 20:10:51 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	nlen;

	i = 0;
	nlen = 0;
	while (needle[nlen] != '\0')
		nlen++;
	if (nlen == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j < len)
			&& (haystack[i + j] != '\0' && needle[j] != '\0'))
		{
			j++;
			if (j == nlen)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
