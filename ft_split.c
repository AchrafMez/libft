/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 01:43:18 by amezioun          #+#    #+#             */
/*   Updated: 2024/01/02 04:13:51 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(char const *s, char c)
{
	int	i;
	int	wcount;

	i = 0;
	wcount = 0;
	while (s && s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
			wcount++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (wcount);
}

static int	get_word_len(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i + len] && s[i + len] != c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		len;
	int		counter;
	int		j;
	char	**new;

	i = 0;
	len = 0;
	counter = count(s, c);
	j = 0;
	new = (char **)malloc(sizeof(char *) * (counter + 1));
	if (!new)
		return (NULL);
	while (s && s[i] != '\0' && j < counter)
	{
		while (s[i] && s[i] == c)
			i++;
		len = get_word_len(s, c, i);
		new[j] = ft_substr(s, i, len);
		i = i + len;
		j++;
	}
	new[j] = NULL;
	return (new);
}
