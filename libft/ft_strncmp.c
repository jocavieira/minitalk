/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:38:06 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/04/25 18:34:05 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((str1[i] && str2[i]) && (str1[i] == str2[i]) && (i < n - 1))
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%d\n", ft_strncmp("abcde", "abcde", 5));
	printf("%d\n", strncmp("abcde", "abcde", 5));
	printf("%d\n", ft_strncmp("abcdf", "abcde", 5));
	printf("%d\n", strncmp("abcdf", "abcde", 5));
	printf("%d\n", ft_strncmp("abcde", "abcdf", 5));
	printf("%d\n", strncmp("abcde", "abcdf", 5));
}*/