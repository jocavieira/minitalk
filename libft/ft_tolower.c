/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:41:42 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/04/22 16:41:44 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
#include <stdio.h>

int main (void)
{
	int char1 = 'a';
	int char2 = 'B';
	int char3 = '1';
	
	printf("%c\n", ft_tolower(char1));
	printf("%c\n",ft_tolower(char2));
	printf("%c\n",ft_tolower(char3));
}*/