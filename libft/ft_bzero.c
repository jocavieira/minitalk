/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:58:18 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/04/25 16:11:48 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>

int	main(void)
{
	int c = 'A';
	char str[6] = "aaaaa";
	int n = 5;
	ft_bzero(str, n);
	for (int i = 0; i < 6; i++)
	{
		printf("%d\n", str[i]);
	}
}*/