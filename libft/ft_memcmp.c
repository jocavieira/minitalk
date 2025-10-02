/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:33:22 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/04/25 16:41:19 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*str;
	unsigned char	*str1;

	str = (unsigned char *)s1;
	str1 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((str[i] == str1[i]) && (i < n - 1))
		i++;
	return (str[i] - str1[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char arr1[] = {1, 2, 0, 4};  
    char arr2[] = {1, 2, -2, 4};  
    int result1 = ft_memcmp(arr1, arr2, sizeof(arr1));
    int result = memcmp(arr1, arr2, sizeof(arr1));
	printf("%d\n", ft_memcmp("abcde", "abcde", 5));
	printf("%d\n", memcmp("abcde", "abcde", 5));
	printf("%d\n", ft_memcmp("abcde", "abcdf", 5));
	printf("%d\n", memcmp("abcde", "abcdf", 5));
	printf("%d\n", result1);
	printf("%d\n", result);
}*/