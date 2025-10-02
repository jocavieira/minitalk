/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:25:10 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/04/15 15:27:11 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int c = '2';
	int a = 'A';

	printf("%d\n", ft_isdigit(a));
	printf("%d\n", ft_isdigit(c));
}*/