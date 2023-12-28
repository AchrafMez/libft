/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:32:00 by amezioun          #+#    #+#             */
/*   Updated: 2023/12/27 16:18:13 by amezioun         ###   ########.fr       */
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

