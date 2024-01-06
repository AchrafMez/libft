/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 00:31:09 by amezioun          #+#    #+#             */
/*   Updated: 2024/01/04 23:15:40 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		slen;
	char	*new;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	slen = ft_strlen(s);
	new = malloc(slen + 1);
	if (!new)
		return (NULL);
	while (slen > i)
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

// char	f(unsigned int i, char c)
// {
// 	if (i % 2 == 0)
// 		return (c - 32);
// 	return (c);
// }

// int main()
// {
// 	char *s = "hello";
// 	char *new = ft_strmapi(s, f);
// 	printf("%s\n", new);∏
// 	return (0);
// }
