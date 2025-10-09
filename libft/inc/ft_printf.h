/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 14:07:05 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/10/09 14:09:17 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_format(va_list *ap, const char fmt);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_putnbr_u(unsigned int nb);
int	ft_putnbr_hex(uintptr_t n, int upper);
int	ft_putptr(void *ptr);

#endif