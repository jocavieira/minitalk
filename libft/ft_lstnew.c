/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@sudent.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 22:04:02 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/04/24 13:05:46 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newlist;

	newlist = ft_calloc(1, sizeof(t_list));
	if (!newlist)
		return (NULL);
	newlist->content = content;
	newlist->next = NULL;
	return (newlist);
}
/*
#include <stdio.h>

int	main(void)
{
	char *str = "teste teste";
	t_list *newlist = ft_lstnew(str);
	printf("content = %s\n", (char *)newlist->content);
	if (newlist->next == NULL)
		printf("NULL\n");
}*/