/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@sudent.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 19:14:37 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/04/29 15:43:08 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*pos;

	pos = *lst;
	if (!lst || !del)
		return ;
	while (*lst)
	{
		pos = pos->next;
		ft_lstdelone(*lst, del);
		*lst = pos;
	}
		*lst = NULL;

}
/*
#include <stdio.h>

void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list *list = NULL;

	char *str1 = ft_strdup("Node 1");
	char *str2 = ft_strdup("Node 2");
	char *str3 = ft_strdup("Node 3");
	ft_lstadd_back(&list, ft_lstnew(str1));
	ft_lstadd_back(&list, ft_lstnew(str2));
	ft_lstadd_back(&list, ft_lstnew(str3));
	
	t_list *p = list;
	while (p)
	{
		printf("%s -> ", (char *)p->content);
		p = p->next;
	}
	puts("NULL");
	ft_lstclear(&list, del);
	if (list == NULL)
		puts("no hay nada");
}*/