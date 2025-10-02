/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@sudent.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:03:26 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/05/08 16:41:00 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr(int n)
{
	int		count;
	long	nb;

	count = 0;
	nb = n;

	if (nb < 0)
	{
		count += ft_putchar('-');
		nb= -nb;
	}
	if (nb >= 10)
		count += ft_putnbr(nb / 10);
	count += ft_putchar(nb % 10 + '0');
	return (count);
}
/*
#include <stdio.h>

int	main(void)
{
	int teste = ft_putnbr(-2147483648);
	puts("");
	printf("%d\n", teste);
	int teste1 =ft_putnbr(-42);
	puts("");
	printf("%d\n", teste1);
	int teste2 =ft_putnbr(42);
	puts("");
	printf("%d\n", teste2);
	int teste3 =ft_putnbr(0);
	puts("");
	printf("%d\n", teste3);
}*/