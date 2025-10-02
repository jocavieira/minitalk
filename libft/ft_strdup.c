/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:15:47 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/04/25 17:57:54 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*new;

	i = 0;
	new = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!new)
		return (NULL);
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	new[i] = 0;
	return (new);
}
/*
#include <stdio.h>

int	main(void)
{
	char *str = "Teste, um dois um dois";
	char *new = ft_strdup(str);

	printf("%s\n", new);
	free(new);
}*/