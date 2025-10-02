/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:44:39 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/04/25 16:05:27 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}
/*
#include <stdio.h>

int	main(void)
{
	t_list *list = NULL;
	t_list *node = ft_lstnew("node");
	ft_lstadd_back(&list, node);
	printf("%s\n", (char *)list->content);
	t_list *node1 = ft_lstnew("node1");
	t_list *node2 = ft_lstnew("node2");
	ft_lstadd_back(&list, node1);
	ft_lstadd_back(&list, node2);
	t_list *p = list;
	while (p)
	{
		printf("%s->", (char *)p->content);
		p = p->next;
	}
	puts("NULL");
}*/
