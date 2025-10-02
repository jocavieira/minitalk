/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 21:21:40 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/04/25 20:26:49 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlist;
	t_list	*nnode;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	nlist = NULL;
	while (lst)
	{
		content = f(lst->content);
		nnode = ft_lstnew(content);
		if (!nnode)
		{
			ft_lstclear(&nlist, del);
			del(content);
			return (NULL);
		}
		ft_lstadd_back(&nlist, nnode);
		lst = lst->next;
	}
	return (nlist);
}
/*
#include <stdio.h>

void	*to_upper(void *content)
{
	char	*str;
	char	*capstr;
	int		i;

	str = (char *)content;
	capstr = ft_strdup(str);
	i = 0;
	if (!capstr)
		return (NULL);
	while (capstr[i])
	{
		capstr[i] = ft_toupper(capstr[i]);
		i++;
	}
	return (capstr);
}

void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*list = NULL;
	t_list	*nlist;

	list = ft_lstnew(ft_strdup("node 1"));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("node 2")));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("node 3")));
	nlist = ft_lstmap(list, to_upper, del);
	t_list *p = nlist;
	while (p)
	{
		printf("%s\n", (char *)p->content);
		p = p->next;
	}
	ft_lstclear(&list, del);
	ft_lstclear(&nlist, del);
}*/
