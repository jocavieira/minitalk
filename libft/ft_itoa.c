/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 19:39:45 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/04/25 16:14:27 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	long	nb;
	int		digit;

	nb = n;
	digit = 0;
	if (nb == 0)
		digit = 1;
	if (nb < 0)
	{
		digit++;
		nb = -nb;
	}
	while (nb)
	{
		nb = nb / 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	char	*buffer;
	long	nb;
	int		len;

	nb = n;
	len = count_digits(n);
	if (n < 0)
		nb = -nb;
	buffer = malloc(sizeof(char) * (len + 1));
	if (!buffer)
		return (NULL);
	buffer[len] = 0;
	if (nb == 0)
		buffer[0] = '0';
	else
	{
		while (nb)
		{
			buffer[--len] = nb % 10 + 48;
			nb = nb / 10;
			if (n < 0)
				buffer[0] = '-';
		}
	}
	return (buffer);
}
/*
#include <stdio.h>

int	main(void)
{
	char *res = ft_itoa(9);
    printf("%s\n",res);
	printf("%s\n", ft_itoa(42));
	printf("%s\n", ft_itoa(-42));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(0));
	free(res);
}*/