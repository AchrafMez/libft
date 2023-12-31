/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 00:31:09 by amezioun          #+#    #+#             */
/*   Updated: 2023/12/27 00:47:36 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

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

// int main()
// {
//     char s[] = "asdf";
//     printf("%s", ft_strmapi(s, f));
// }