/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@sudent.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 18:32:50 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/05/08 16:53:30 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_hex(uintptr_t n, int upper)
{
    int count;
    char *hex;

    count = 0;
    if (upper)
        hex = "0123456789ABCDEF";
    else
        hex = "0123456789abcdef";

    if (n >= 16)
        count += ft_putnbr_hex(n / 16, upper);
     count += ft_putchar(hex[n % 16]);
    return (count);
}