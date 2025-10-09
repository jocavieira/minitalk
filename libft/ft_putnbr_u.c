/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:32:41 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/10/09 14:04:59 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb >= 10)
		count += ft_putnbr_u(nb / 10);
	count += ft_putchar(nb % 10 + '0');
	return (count);
}
/*
#include <stdio.h>

int	main(void)
{
	int teste = ft_putnbr_u(4294967295);
	puts("");
	printf("%d\n", teste);
	int teste1 =ft_putnbr_u(42);
	puts("");
	printf("%d\n", teste1);
	int teste2 =ft_putnbr_u(0);
	puts("");
	printf("%d\n", teste2);
}*/