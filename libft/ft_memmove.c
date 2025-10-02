/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@sudent.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:24:28 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/04/29 17:07:32 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*str;
	unsigned char	*str2;

	str2 = (unsigned char *)src;
	str = (unsigned char *)dest;
	i = 0;
	if (!dest || !src)
		return (NULL);
	if (str < str2)
	{
		while (i < n)
		{
			str[i] = str2[i];
			i++;
		}
	}
	else
		while (n--)
			str[n] = str2[n];
	return (dest);
}
/*
#include <stdio.h>

int main (void)
{
	char src1[] = "Teste, teste";
	char dest1[20];

	printf("src1: %s\n", src1);
	printf("antes de copiar: dest1: %s\n", dest1);

	ft_memmove(dest1, src1, 13);
	printf("depois de copiar: dest1: %s\n", dest1);

	char src2[] = "1234567890";

	printf("antes da sobreposicao: src2: %s\n", src2);

	ft_memmove(src2 + 2, src2, 5);

	printf("depois da sobreposicao: src2: %s\n", src2);

	return (0);
}*/