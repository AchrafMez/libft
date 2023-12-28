/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 01:43:18 by amezioun          #+#    #+#             */
/*   Updated: 2023/12/28 20:19:10 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int count(char *s, char c)
{
	int i = 0;
	int wcount = 0;
	while(s[i] && s[i] == ' ')
		i++;
	while(s[i])
	{
		if(s[i] != ' ' && (s[i + 1] == ' ' || s[i + 1] == '\0'))
			wcount++;
		i++;
	}
	return wcount;	
}

static int wlen(char *s, char c)
{
	int i = 0;
	int j = 0;
	
	while (s[i] && s[i] == c)
		i++;
	while (s[i] != '\0' && s[i] != c)
	{
	 	j++;
		i++;
		
	}
	return j;
}


char **ft_split(char const *s, char c)
{
	int i = 0;
	char **new;
	new = malloc(count(s, c) * sizeof(char**));
	
	while (s[i])
	{
		/* code */
	}
	
		
}

// int main()
// {
// 	char *s = "  asdf   df   dfa df df df d  ";
// 	printf("%d\n",wcen(s, ' '));
// }