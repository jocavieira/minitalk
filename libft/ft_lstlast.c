/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@sudent.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:53:06 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/04/29 15:44:24 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list *list = NULL;
	t_list *last;
	if (ft_lstlast(list) == NULL)
		puts("NULL");
	ft_lstadd_front(&list, ft_lstnew("node"));
	ft_lstadd_front(&list, ft_lstnew("node1"));
	ft_lstadd_front(&list, ft_lstnew("node2"));
	last = ft_lstlast(list);
	printf("the last node is %s\n", (char *)last->content);
}*/
