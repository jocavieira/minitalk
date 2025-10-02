/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:56:10 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/04/15 15:23:58 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
#include <stdio.h>

int main (void)
{
	int char1 = 'a';
	int char2 = 'B';
	int char3 = '1';
	
	printf("%c\n", ft_toupper(char1));
	printf("%c\n",ft_toupper(char2));
	printf("%c\n",ft_toupper(char3));
}*/