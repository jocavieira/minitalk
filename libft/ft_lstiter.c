/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@sudent.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 19:59:59 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/04/29 15:43:48 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
#include <stdio.h>

void	printnode(void *content)
{
	printf("%s\n", (char *)content);
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
	ft_lstiter(list, printnode);
}*/