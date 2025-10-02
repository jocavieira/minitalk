/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@sudent.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 17:32:41 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/04/29 18:24:45 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	if ((unsigned char)c == 0)
		return ((char *)&str[i]);
	while (i)
	{
		i--;
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)&str[i]);
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%p\n", strrchr("steste", 's'));
	printf("%p\n", ft_strrchr("steste", 's'));
	printf("%s\n", strrchr("steste", 's'));
	printf("%s\n", ft_strrchr("steste", 's'));
	printf("%p\n", strrchr("", 's'));
	printf("%p\n", ft_strrchr("", 's'));
	printf("%p\n", strrchr("", '\0'));
	printf("%p\n", ft_strrchr("", '\0'));
    return (0);
}*/