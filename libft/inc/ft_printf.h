/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@sudent.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:43:16 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/05/16 17:25:22 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTPRINTF_H
#define FTPRINTF_H
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>

int	ft_printf(const char *format, ...);
int	ft_format(va_list *ap, const char fmt);
int	ft_putchar(int c);
int ft_putstr(char *str);
int ft_putnbr(int n);
int	ft_putnbr_u(unsigned int nb);
int ft_putnbr_hex(uintptr_t n, int upper);
int ft_putptr(void *ptr);

#endif