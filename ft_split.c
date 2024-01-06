/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 01:43:18 by amezioun          #+#    #+#             */
/*   Updated: 2024/01/06 18:21:29 by amezioun         ###   ########.fr       */
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

static int	word_len(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i + len] && s[i + len] != c)
		len++;
	return (len);
}

static void	ft_free(char **new, int j)
{
	while (j >= 0)
	{
		free(new[j]);
		j--;
	}
	free(new);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**new;

	i = 0;
	j = 0;
	new = (char **)malloc(sizeof(char *) * (count(s, c) + 1));
	if (!new)
		return (NULL);
	while (s && s[i] != '\0' && j < count(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		new[j] = ft_substr(s, i, word_len(s, c, i));
		if (!new[j])
		{
			ft_free(new, j);
			return (NULL);
		}
		i += word_len(s, c, i);
		j++;
	}
	new[j] = NULL;
	return (new);
}
