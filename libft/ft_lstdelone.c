/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@sudent.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:13:54 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/04/24 19:13:53 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
#include <stdio.h>

void	del(void *content);

int	main(void)
{
	char	*str;
	t_list	*list;

	str = ft_strdup("teste");
	list = ft_lstnew(str);
	ft_lstdelone(list,del);
}

void	del(void *content)
{
	free(content);
}*/