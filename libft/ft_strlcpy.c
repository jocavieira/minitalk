/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 16:45:46 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/04/25 18:15:19 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	j;

	j = 0;
	if (size)
	{
		while (src[j] && j < (size - 1))
		{
			dst[j] = src[j];
			j++;
		}
		dst[j] = 0;
	}
	return (ft_strlen(src));
}
/*
#include <stdio.h>

int	main(void)
{
	char *src = "hello world";
	char dest[30] = "";
	int n = 12;

	int result = ft_strlcpy(dest, "", 15);
	printf("%s\n", dest);
	printf("%d", result);
}*/