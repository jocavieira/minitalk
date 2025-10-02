/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:55:46 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/04/25 18:19:56 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new;

	i = 0;
	if (!s || !f)
		return (NULL);
	new = malloc(ft_strlen(s) + 1);
	if (!new)
		return (NULL);
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = 0;
	return (new);
}
/*
#include <stdio.h>

static char	toupper(unsigned int i, char c)
{
    (void)i;
    if (c >= 'a' && c <= 'z')
    {
        return (c - 32);
    }
    return (c);
}

int	main(void)
{
	char *result = ft_strmapi("testingBC123", toupper);
	printf("%s\n", result);
	free(result);
}*/