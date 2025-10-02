/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@sudent.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:35:08 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/05/16 17:25:56 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	return (write (1, &c, 1));
}

int ft_putstr(char *str)
{
	int	i;
	
	i = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[i])
		write(1, &str[i++], 1);
	return (i);	
}

int	ft_format(va_list *ap, const char fmt)
{
	int count;

	count = 0;
	if (fmt == 'c')
		count += ft_putchar(va_arg(*ap, int));
	else if (fmt == 's')
		count += ft_putstr(va_arg(*ap, char *));
	else if (fmt == 'd' || fmt == 'i')
		count +=ft_putnbr(va_arg(*ap, int));
	else if (fmt == 'u')
		count +=ft_putnbr_u(va_arg(*ap, unsigned int));
	else if (fmt == 'p')
		count += ft_putptr(va_arg(*ap, void *));
	else if (fmt == 'x')
		count += ft_putnbr_hex(va_arg(*ap, unsigned int), 0);
	else if (fmt == 'X')
		count += ft_putnbr_hex(va_arg(*ap, unsigned int), 1);
	else if (fmt == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ptr;
	int		size;
	int		i;

	va_start(ptr, format);
	i = 0;
	size = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			size += ft_format(&ptr, format[i]);
		}
		else if (format[i] == '%' && !format[i + 1])
			break ;
		else
			size += ft_putchar(format[i]);
		i++;
	}
	va_end(ptr);
	return (size);
}
/*
int main(void)
{
	char *str = "hello";
	
	printf("=== printf ===\n");
	int count = printf("int %d, string %s hex: %x, hexU: %X, pointer: %p\n", 42, str, 42, 42, str);

	printf("\n=== ft_printf ===\n");
	int count1 = ft_printf("int %d, string %s hex: %x, hexU: %X, pointer: %p\n", 42, str, 42, 42, str);
	printf("count std: %d\n", count);
	ft_printf("my count: %d\n", count1);
	printf(" standard iteste com %% no final %");
	puts("");
	ft_printf("meu teste com %% no final %");

	printf("\n=== ft_printf com NULL ===\n");
	ft_printf("string NULL: %s\n", (char *)NULL);
}
*/
