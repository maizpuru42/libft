/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maizpuru <maizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:15:12 by maizpuru          #+#    #+#             */
/*   Updated: 2023/10/10 12:24:42 by maizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n;
	t_list	*start;

	if (lst == 0 || f == 0)
		return (0);
	start = 0;
	while (lst)
	{
		n = ft_lstnew((*f)(lst->content));
		if (!n)
		{
			ft_lstclear(&start, del);
			return (0);
		}
		ft_lstadd_back(&start, n);
		lst = lst->next;
	}
	return (start);
}
