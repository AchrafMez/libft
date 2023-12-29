/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 01:43:18 by amezioun          #+#    #+#             */
/*   Updated: 2023/12/29 16:47:02 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int count(char const *s, char c)
{
	int i = 0;
	int wcount = 0;
	while (s[i] != '\0')
	{
		while(s[i] && s[i] == c)
			i++;
		if(s[i] != '\0' && s[i] != c)
			wcount++;
		while (s[i] && s[i] != c)
			i++;
	}
	return wcount;	
}

// static int wlen(char *s, char c)
// {
// 	int i = 0;
// 	int j = 0;
	
// 	while (s[i] && s[i] == c)
// 		i++;
// 	while (s[i] != '\0' && s[i] != c)
// 	{
// 	 	j++;
// 		i++;
		
// 	}
// 	return j;
// }


char **ft_split(char const *s, char c)
{
	char **new;
	int i;
	int counter;
	int len;
	
	i = 0;
	counter = count(s, c);
	new = (char **)malloc((counter + 1) * sizeof(char *));
	if(!new)
		return NULL;
	while (s[i] && i < counter)
	{
		len = 0;
		while (*s && *s == c)
			s++;
		while(s[len] && s[len] != c)
			len++;
		new[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (!new[i])
			return NULL;
		new[i][len] = '\0';
		while (--len >= 0)
			new[i][len] = s[len];
		while(*s && *s != c)	
			s++;
		i++;
	}
	new[i] = NULL;
	
	return new;
}

// int main()
// {
// 	char const *s = "hello!";
// 	char **str;
// 	int i = 0;
// 	int coun = count(s, ' ');
// 	str = ft_split(s, ' ');
// 	while (i <= coun)
// 	{
// 		printf("%s\n", str[i]);
// 		i++;
// 	}
// }