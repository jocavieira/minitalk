/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@sudent.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 22:25:20 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/04/24 21:45:02 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>

int	main(void)
{
    t_list *list = ft_lstnew("1");
    ft_lstadd_front(&list, ft_lstnew("2"));
    ft_lstadd_front(&list, ft_lstnew("3"));

    t_list *p = list;

    while (p)
    {
        printf("%s -> ", (char *)p->content);
        p = p->next;
    }
    puts("");
}*/