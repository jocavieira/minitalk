/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@sudent.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 17:11:37 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/04/29 17:27:52 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < size && dest[i])
		i++;
	if (size <= i)
		return (size + ft_strlen(src));
	while (src[j] && (i + j) < (size - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (i + ft_strlen(src));
}
/*
#include <stdio.h>

int	main(void)
{
	char *src = "marciano";
	char dest[30] = "alo alo";
	int 	size = 12;
	int d = ft_strlcat(dest, src, size);
	printf("%s\n", dest);
	printf("%d\n", d);
}*/