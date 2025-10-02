/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:30:33 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/04/15 15:27:15 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if ((c >= 32 && c <= 126))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int a = 0;
	int c = 33;

	printf("%d\n", ft_isprint(a));
	printf("%d\n", ft_isprint(c));
}*/