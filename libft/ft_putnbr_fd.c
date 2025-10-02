/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:59:20 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/04/22 16:01:44 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	long	nb;
	char	buffer[20];

	nb = n;
	i = 0;
	if (nb == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	while (nb)
	{
		buffer[i] = nb % 10 + 48;
		nb = nb / 10;
		i++;
	}
	while (i--)
		write(fd, &buffer[i], 1);
}
/*
int	main(void)
{
    ft_putnbr_fd(-2147483648, 1);
    write(1, "\n", 1);
    ft_putnbr_fd(0, 1);
    write(1, "\n", 1);
    ft_putnbr_fd(2147483647, 1);
    write(1, "\n", 1);
}*/