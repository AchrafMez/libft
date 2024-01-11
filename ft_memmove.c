/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:42:33 by amezioun          #+#    #+#             */
/*   Updated: 2024/01/10 20:14:56 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dst;
	char	*srcs;

	i = 0;
	dst = (char *)dest;
	srcs = (char *)src;
	if (!dst && !srcs)
		return (0);
	if (dest == src)
		return (dest);
	if (dest > src)
	{
		while (i < n)
		{
			dst[n - 1 - i] = srcs[n - 1 - i];
			i++;
		}
	}
	while (i < n)
	{
		dst[i] = srcs[i];
		i++;
	}
	return (dst);
}
