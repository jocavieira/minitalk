/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:22:50 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/04/25 18:37:28 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

static int	is_in(char const *s1, char c)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		i;
	int		start;
	int		end;
	char	*trimmed;
	int		range;

	start = 0;
	end = 0;
	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[end])
		end++;
	while (is_in(set, s1[start]))
		start++;
	while (is_in(set, s1[end - 1]) && end > start)
		end--;
	range = end - start;
	trimmed = malloc(sizeof(char) * (range) + 1);
	if (!trimmed)
		return (NULL);
	while (start < end)
		trimmed[i++] = s1[start++];
	trimmed[i] = 0;
	return (trimmed);
}
/*
#include <stdio.h>

int	main(void)
{
	char *str = "xxxxxxTESTexxxxxx";
	char *trim = ft_strtrim(str, "xe");
	printf("%s\n", trim);
	free (trim);
}*/