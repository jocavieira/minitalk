/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:56:48 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/04/25 18:33:15 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (!s || !f)
		return (0);
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
	return (s);
}
/*
#include <stdio.h>

int	main(void)
{
    char src[30] = "testeteste";
    char *string = ft_striteri(src, to_upper);
    printf("%s\n", string);
}*/