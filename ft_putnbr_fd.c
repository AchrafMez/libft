/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:32:00 by amezioun          #+#    #+#             */
/*   Updated: 2023/12/20 17:49:29 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    long int nb = n;
    if(nb < 0)
    {
        ft_putchar_fd('-', fd);
        nb = -nb; 
    }
    if (nb > 9)
        ft_putnbr_fd(nb / 10, fd);
    ft_putchar_fd((nb % 10) + '0', fd);
}

int main()
{ 
    int fd = open("file_zbi.txt", O_WRONLY | O_CREAT);
    if (fd == -1)
        ft_putstr_fd("Error", 1);
    else
        ft_putstr_fd("gww9", fd);
    return (0);
}