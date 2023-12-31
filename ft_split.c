/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 01:43:18 by amezioun          #+#    #+#             */
/*   Updated: 2023/12/31 19:58:33 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

// static int count(char const *s, char c)
// {
// 	int i = 0;
// 	int wcount = 0;
// 	while (s && s[i] != '\0')
// 	{
// 		while(s[i] && s[i] == c)
// 			i++;
// 		if(s[i] != '\0' && s[i] != c)
// 			wcount++;
// 		while (s[i] && s[i] != c)
// 			i++;
// 	}
// 	return (wcount);
// }

// // static int wlen(char *s, char c)
// // {
// // 	int i = 0;
// // 	int j = 0;

// // 	while (s[i] && s[i] == c)
// // 		i++;
// // 	while (s[i] != '\0' && s[i] != c)
// // 	{
// // 			j++;
// // 		i++;

// // 	}
// // 	return (j);
// // }

// char **ft_split(char const *s, char c)
// {
// 	char **new;
// 	int i;
// 	int counter;
// 	int len;

// 	i = 0;
// 	counter = count(s, c);
// 	new = (char **)malloc(sizeof(char *) * ft_strlen(s) + 1);
// 	if(!new)
// 		return (NULL);
// 	while (s[i] && i < counter)
// 	{
// 		len = 0;
// 		while (*s && *s == c)
// 			s++;
// 		while(s[len] && s[len] != c)
// 			len++;
// 		new[i] = (char *)malloc(sizeof(char) * (len + 1));
// 		if (!new[i])
// 			return (NULL);
// 		new[i][len] = '\0';
// 		while (--len >= 0)
// 			new[i][len] = s[len];
// 		while(*s && *s != c)
// 			s++;
// 		i++;
// 	}
// 	new[i] = NULL;
// 	return (new);
// }
//
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
