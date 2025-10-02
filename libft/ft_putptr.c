/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@sudent.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 18:39:59 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/05/08 16:53:13 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putptr(void *ptr)
{
	int count;
	unsigned long adress;

	count = 0;
	adress = (uintptr_t)ptr;
		
	if (adress == 0)
	{
		count += ft_putstr("0x0");
		return (count);
	}
	count += ft_putstr("0x");
    count += ft_putnbr_hex(adress, 0);
	return (count);
}
