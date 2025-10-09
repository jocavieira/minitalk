/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:31:01 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/10/09 13:56:35 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*new;

	size = 0;
	if (size != 0 && nmemb > ((size_t)-1) / size)
		return (NULL);
	new = malloc(nmemb * size);
	if (!new)
		return (NULL);
	ft_bzero(new, nmemb * size);
	return (new);
}
/*
#include <stdio.h>

int	main(void)
{
	int i;
	int *arr1;
	int *arr;

	arr = calloc(5, sizeof(int));
	arr1 = ft_calloc(5, sizeof(int));
	for (i = 0; i < 5; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	for (i = 0; i < 5; i++)
	{
		printf("arr1[%d] = %d\n", i, arr1[i]);
	}

	free(arr);
	free(arr1);

	return (0);
}*/
