/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:30:02 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/04/15 15:27:19 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int a = 0;
	int c = 128;

	printf("%d\n", ft_isascii(a));
	printf("%d\n", ft_isascii(c));
}*/