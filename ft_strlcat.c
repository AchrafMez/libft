/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 23:36:37 by amezioun          #+#    #+#             */
/*   Updated: 2024/01/11 18:19:39 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	slen;
	size_t	dstlen;
	size_t	total;
	size_t	i;

	i = 0;
	dstlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (dstlen < dstsize)
		total = dstlen + slen;
	else
		return (slen + dstsize);
	while (src[i] && dstlen < (dstsize - 1))
	{
		dst[dstlen] = src[i];
		dstlen++;
		i++;
	}
	dst[dstlen] = '\0';
	return (total);
}
