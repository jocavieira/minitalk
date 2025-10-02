/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 10:43:57 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/04/25 16:25:56 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		lstsize;

	lstsize = 0;
	while (lst)
	{
		lst = lst->next;
		lstsize++;
	}
	return (lstsize);
}
/*
#include <stdio.h>

int	main(void)
{
    t_list *list = NULL;
    printf ("list size = %d\n", ft_lstsize(list));
    ft_lstadd_front(&list, ft_lstnew("test"));
    ft_lstadd_front(&list, ft_lstnew("test"));
    printf ("list size = %d\n", ft_lstsize(list));
}*/