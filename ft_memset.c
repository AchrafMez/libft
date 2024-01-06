/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 17:18:31 by amezioun          #+#    #+#             */
/*   Updated: 2024/01/03 23:02:45 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	char			*str;
	unsigned char	ch;

	i = 0;
	str = (char *)s;
	ch = (unsigned char)c;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}

// int main()
// {
// 	int ar[] = {1, 2, 3};
// 	int *ptr = ar;
// 	int i = 0;
// 	// while (i < 4)
// 	// {
// 	// 	ft_memset(ptr, 1, 4);
// 	// 	i++;
// 	// }

// 	// ft_memset(ptr, 233, 2);
// 	// ft_memset(ptr, 178, 1); //5710
// 	// printf("%d\n", ar[0]);
// 	// printf("%d\n", ar[1]);
// 	// printf("%d\n", ar[2]);

// 	int h = 0;
// 	int g = -2;

// 		ft_memset(&ar[1], 0b11111111, 4);
// 		ft_memset(&ar[1], 0b11111110, 1);
// 		while(h < 3)
// 		{
// 			printf("%d \n", ar[h]);
// 			h++;
// 		}

// 	return (0);
// }
