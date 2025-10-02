/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:18:20 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/04/25 17:39:21 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*str;
	unsigned char	*str2;

	str = (unsigned char *)dest;
	str2 = (unsigned char *)src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		str[i] = str2[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int main (void)
{
	char str [256] = "Aloalo";
	char str2[256];
	int n = 6;
	ft_memcpy(str2, str, n);
	printf("%s\n", str2);
}*/