/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:15:45 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/04/25 18:41:45 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*new;
	unsigned int	memory;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	memory = ft_strlen(s) - start;
	if (memory < len)
		len = memory;
	new = malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	while (i < len)
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = 0;
	return (new);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s;
	char	*new;

	s = "Hello, brave new world!";
	new = ft_substr(s, 7, 16);
	printf("%s\n", new);
	free(new);
}*/