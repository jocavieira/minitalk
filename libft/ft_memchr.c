/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:18:16 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/04/25 17:38:37 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*str;
	unsigned char	finding;

	finding = (unsigned char)c;
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == finding)
			return ((void *)&str[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *str = "Agulha ny palheiro";
	int c = 'y';
	void *result = ft_memchr(str, c, 8);
	if (result == NULL)
		puts("NULL");
	else
	{
		printf("%s\n", (char *)result);
		printf("%s\n", (char *)result);
	}
}*/