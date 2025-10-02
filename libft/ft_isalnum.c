/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 16:06:27 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/04/15 15:27:29 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a'
			&& c <= 'z'))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int c = '2';
	int a = 'A';
	int b = ' ';

	printf("%d\n", ft_isalnum(a));
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", ft_isalnum(b));
}*/